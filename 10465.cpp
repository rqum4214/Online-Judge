#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n, t;
	while(cin >> m >> n >> t) {
		int dp[10000] = {}, h = 1;
		for(int i = 1 ; i <= t ; i ++) dp[i] = -1e9;
		for(int i = m ; i <= t ; i += m) {
			dp[i] = h++;
		}
		for(int i = n ; i <= t ; i ++) {
			dp[i] = max(dp[i], dp[i-n]+1);
		}
		int f = t;
		while(dp[f] < 0) f --;
		cout << dp[f];
		if(t-f) cout << " " << t-f;
		cout << endl;
	}
	return 0;
}