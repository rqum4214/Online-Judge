#include <bits/stdc++.h>
using namespace std;

struct it{
	int p, f;
};

int main() {
	int m, n;
	it its[100];
	while(cin >> m >> n) {
		if(m > 1800) m += 200;
		int dp[10201] = {};
		for(int i = 0 ; i < n ; i ++) cin >> its[i].p >> its[i].f;
		for(int i = 1 ; i <= m ; i ++) dp[i] = -1e9;
		for(int i = 0 ; i < n ; i ++) {
			for(int j = m ; j >= its[i].p ; j --) {
				dp[j] = max(dp[j], dp[j-its[i].p]+its[i].f);
			}
		}
		int f = m, o = -1;
		if(f > 2200) f = 2000;
		else if(f > 2000) f = m-200;
		for(int i = 0 ; i <= f ; i ++) {
			o = max(o, dp[i]);
		}
		for(int i = m ; i > 2000 ; i --) {
			o = max(o, dp[i]);
		}
		cout << o << endl;
	}
	return 0;
}