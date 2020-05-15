#include <bits/stdc++.h>
using namespace std;

#define oo 1e9

int main() {
	int c, dp[101][201], d[101], p[101];
	cin >> c;
	while(c --) {
		int f, x = 0;
		cin >> f;
		cin.get();
		string s;
		stringstream ss;
		while(getline(cin, s) && s != "") {
			ss.str("");
			ss.clear();
			ss << s;
			x ++;
			ss >> d[x] >> p[x];
		}
		d[0] = 0;
		for(int i = 0 ; i <= x ; i ++) {
			for(int j = 0 ; j <= 200 ; j ++) {
				dp[i][j] = oo;
			}
		}
		dp[0][100] = 0;
		for(int i = 1 ; i <= x ; i ++) {
			int dt = d[i]-d[i-1];
			for(int j = 0 ; j <= 200 ; j ++) {
				for(int k = 0 ; k <= j ; k ++) {
					if(j+dt-k <= 200) dp[i][j] = min(dp[i][j], dp[i-1][j+dt-k]+k*p[i]);
				}
			}
		}
		if(f-d[x] > 100 || dp[x][100+f-d[x]] == oo) cout << "Impossible\n";
		else cout << dp[x][100+f-d[x]] << endl;
		if(c) cout << endl;
	}
	return 0;
}