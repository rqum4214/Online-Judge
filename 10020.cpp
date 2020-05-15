#include <bits/stdc++.h>
using namespace std;

struct ln {
	int r, l;
	bool operator < (const ln &b) const {
		return r > b.r;
	}
};

int main() {
	int t;
	cin >> t;
	ln lns[100000], ans[100000];
	while(t --) {
		int m, x = 0, c = 0, o = 0, ax = 0;
		cin >> m;
		while(cin >> lns[x].l >> lns[x].r && !(lns[x].l == 0 && lns[x].r == 0)) x ++;
		sort(lns, lns+x);
		while(c < m) {
			int i = 0;
			for(i = 0 ; i < x ; i ++) {
				if(lns[i].l <= c && lns[i].r > c) {
					c = lns[i].r;
					o ++;
					ans[ax].l = lns[i].l;
					ans[ax++].r = lns[i].r;
					break;
				}
			}
			if(i == x) break;
		}
		if(c < m) cout << "0\n";
		else {
			cout << o << endl;
			for(int i = 0 ; i < ax ; i ++) cout << ans[i].l << " " << ans[i].r << endl;
		}
		if(t) cout << endl;
	}
	return 0;
}