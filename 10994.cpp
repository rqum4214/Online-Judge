#include <bits/stdc++.h>
using namespace std;

long long ct(int n) {
	long long r = 0;
	while(n) {
		r += (0+n%10)*(n%10+1)/2;
		r += n/10*45LL;
		n /= 10;
	}
	return r;
}

int main() {
	int p, q;
	while(cin >> p >> q && !(p < 0 && q < 0 )) {
		cout << ct(q)-ct(p-1) << endl;
	}
	return 0;
}