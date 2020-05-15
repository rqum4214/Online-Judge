#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int f[251], dp[252][251] = {}, s[251] = {};
		for(int i = 1 ; i <= n ; i ++) cin >> f[i];
		for(int i = 1 ; i <= n ; i ++) s[i] = s[i-1] + f[i];
		for(int l = 1 ; l < n ; l ++) {
			for(int i = 1 ; i+l <= n ; i ++) {
				int j = i+l, c = s[j]-s[i-1];
				dp[i][j] = INT_MAX;
				for(int k = i ; k <= j ; k ++) {
					dp[i][j] = min(dp[i][j], dp[i][k-1]+dp[k+1][j]+c-f[k]);
				}
			}
		}
		cout << dp[1][n] << endl;
	}
	return 0;
}