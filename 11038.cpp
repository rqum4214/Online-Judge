#include <bits/stdc++.h>
using namespace std;

long long cal(long long a) {
	long long t = a, i = 1, r = 0, d;
	while(t >= 10) {
		d = t%10;
		t /= 10;
		if(d) r += t*i;
		else r += (t-1)*i + a%i + 1;
		i *= 10;
	}
	return r;
}

int main() {
	long long m, n;
	while(cin >> m >> n && m >= 0) {
		if(m) cout << cal(n)-cal(m-1);
		else cout << cal(n)-cal(m-1)+1;
		cout << endl;
	}
	return 0;
}