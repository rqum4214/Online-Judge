#include <bits/stdc++.h>
using namespace std;

struct ob{
	int p, w;
};

int main() {
	int t;
	ob o[1000];
	cin >> t;
	while(t --) {
		int n, dp[31] = {};
		cin >> n;
		for(int i = 0 ; i < n ; i ++) cin >> o[i].p >> o[i].w;
		for(int i = 0 ; i < n ; i ++) {
			for(int j = 30 ; j >= o[i].w ; j --) {
				dp[j] = max(dp[j], dp[j-o[i].w]+o[i].p);
			}
		}
		int g, ans = 0, wt;
		cin >> g;
		while(g --) {
			cin >> wt;
			ans += dp[wt];
		}
		cout << ans << endl;
	}
	return 0;
}