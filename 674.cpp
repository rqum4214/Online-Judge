#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, c[5] = {50, 25, 10, 5, 1}, dp[7490] = {};
	dp[0] = 1;
	for(int i = 0 ; i < 5 ; i ++) {
		for(int j = c[i] ; j <= 7489 ; j ++) {
			dp[j] += dp[j-c[i]];
		}
	}
	while(cin >> n) cout << dp[n] << endl;
	return 0;
}