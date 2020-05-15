#include <bits/stdc++.h>
using namespace std;

struct s {
	int ith;
	double af;
	bool operator < (const s &b) const {
		if(af == b.af) return ith < b.ith;
		return af > b.af;
	}
};

int main() {
	int t;
	cin >> t;
	s ss[1000];
	while(t --) {
		int n;
		cin >> n;
		for(int i = 0 ; i < n ; i ++) {
			int d, f;
			cin >> d >> f;
			ss[i].ith = i+1;
			ss[i].af = (double)f/d;
		}
		sort(ss, ss+n);
		for(int i = 0 ; i < n ; i ++) {
			if(i) cout << " ";
			cout << ss[i].ith;
		}
		cout << endl;
		if(t) cout << endl;
	}
	return 0;
}