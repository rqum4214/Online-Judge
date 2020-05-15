#include <bits/stdc++.h>
using namespace std;


int main() {
	int n, c[1000];
	while(cin >> n && n) {
		while(cin >> c[0] && c[0]) {
			for(int i = 1 ; i < n ; i ++) cin >> c[i];
			stack<int> s;
			int a = 1, x = 0;
			while(x < n) {
				if((s.empty() || c[x] != s.top()) && a <= n) s.push(a++);
				else if(!s.empty() && c[x] == s.top()) {
					x ++;
					s.pop();
				}
				else break;
			}
			if(x == n) cout << "Yes\n";
			else cout << "No\n";
		}
		cout << endl;
	}
	return 0;
}