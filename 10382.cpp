#include <bits/stdc++.h>
using namespace std;

struct s {
	double l, r;
	bool operator <(const s &b) const {
		return r > b.r;
	}
};

int main() {
	int n;
	double l, w;
	s sp[10000];
	while(cin >> n >> l >> w) {
		int x = 0;
		for(int i = 0 ; i < n ; i ++) {
			double p, r, a;
			cin >> p >> r;
			if(r*2 <= w) continue;
			a = sqrt(r*r - w*w/4);
			sp[x].l = p-a;
			sp[x++].r = p+a;
		}
		sort(sp, sp+x);
		int o = 0;
		double c = 0;
		while(c < l) {
			int i;
			for(i = 0 ; i < x ; i ++) {
				if(sp[i].l <= c && sp[i].r > c) {
					c = sp[i].r;
					o ++;
					break;
				}
			}
			if(i == x) break;
		}
		if(c < l) cout << "-1\n";
		else cout << o << endl;
	}
	return 0;
}