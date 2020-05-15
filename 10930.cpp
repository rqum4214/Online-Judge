#include <bits/stdc++.h>
using namespace std;

int main() {
	int d, s[30], cs = 1;
	while(cin >> d) {
		int dp[1001] = {}, ck = 0, sum = 0;
		bool as = true;
		for(int i = 0 ; i < d ; i ++) {
			cin >> s[i];
			if(s[i] <= ck) as = false;
			else ck = s[i];
			sum += s[i];
		}
		if(as) {
			dp[0] = 1;
			for(int i = 0 ; i < d ; i ++) {
				if(dp[s[i]]) {
					as = false;
					break;
				}
				for(int j = 1000 ; j >= s[i] ; j --) {
					if(dp[j-s[i]]) dp[j] = 1;
				}
			}
		}
		cout << "Case #" << cs++ << ":";
		for(int i = 0 ; i < d ; i ++) cout << " " << s[i];
		cout << "\nThis is ";
		if(!as) cout << "not ";
		cout << "an A-sequence.\n";
	}
	return 0;
}