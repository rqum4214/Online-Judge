#include <bits/stdc++.h>
using namespace std;

struct s {
	int b, j;
	bool operator < (const s &b) const {
		return j > b.j;
	}
};

int main() {
	int n, cs = 1;
	s ss[1000];
	while(cin >> n && n) {
		for(int i = 0 ; i < n ; i ++) cin >> ss[i].b >> ss[i].j;
		sort(ss, ss+n);
		int o = 0, t = 0;
		for(int i = 0 ; i < n ; i ++) {
			t += ss[i].b;
			o = max(o, t+ss[i].j);
		}
		cout << "Case " << cs++ << ": " << o << endl;
	}
	return 0;
}