#include <bits/stdc++.h>
using namespace std;

struct p {
	double x, y;
	bool operator < (const p &b) const {
		return x < b.x;
	}
};

int main() {
	int n;
	p ps[10000];
	while(cin >> n && n) {
		for(int i = 0 ; i < n ; i ++) cin >> ps[i].x >> ps[i].y;
		sort(ps, ps+n);
		double o = 10000;
		for(int i = 0 ; i < n ; i ++) {
			for(int j = i+1 ; j < n ; j ++) {
				if(ps[j].x-ps[i].x >= o) break;
				if(fabs(ps[j].y-ps[i].y) >= o) continue;
				o = min(o, sqrt((ps[i].x-ps[j].x)*(ps[i].x-ps[j].x)+(ps[i].y-ps[j].y)*(ps[i].y-ps[j].y)));
			}
		}
		if(o < 10000) cout << fixed << setprecision(4) << o << endl;
		else cout << "INFINITY\n";
	}
	return 0;
}