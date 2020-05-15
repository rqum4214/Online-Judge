#include <bits/stdc++.h>
using namespace std;

int a[50000];

int main() {
	int n, q;
	cin >> n;
	for(int i = 0 ; i < n ; i ++) cin >> a[i];
	cin >> q;
	while(q --) {
		int h, *l, *u;
		cin >> h;
		l = lower_bound(a, a+n, h);
		u = upper_bound(a, a+n, h);
		if(l == a) cout << "X ";
		else cout << *--l << " ";
		if(u == a+n) cout << "X\n";
		else cout << *u << endl;
	}
	return 0;
}