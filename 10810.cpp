#include <bits/stdc++.h>
using namespace std;

int a[500000], t[500000];

long long ms(int f, int e) {
	if(f == e) return 0;
	else {
		int m = (f+e)/2, lx = f, rx = m+1;
		long long r = ms(f, m) + ms(m+1, e);
		for(int i = f ; i <= e ; i ++) t[i] = a[i];
		for(int i = f ; i <= e ; i ++) {
			if(lx > m) a[i] = t[rx++];
			else if(rx > e) a[i] = t[lx++];
			else if(t[lx] < t[rx]) a[i] = t[lx++];
			else {
				a[i] = t[rx++];
				r += m-lx+1;
			}
		}
		return r;
	}
}

int main() {
	int n;
	while(cin >> n && n) {
		long long o = 0;
		for(int i = 0 ; i < n ; i ++) cin >> a[i];
		cout << ms(0, n-1) << endl;
	}
	return 0;
}