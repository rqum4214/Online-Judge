#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string st;
	getline(cin, st);
	while(n --) {
		getline(cin, st);
		stack<char> s;
		int x = 0;
		for(x = 0 ; x < st.size() ; x ++) {
			if(st[x] == '(' || st[x] == '[') s.push(st[x]);
			else if(st[x] == ')') {
				if(s.empty() || s.top() != '(') break;
				else s.pop();
			}
			else {
				if(s.empty() || s.top() != '[') break;
				else s.pop();
			}
		}
		if(x != st.size() || !s.empty()) cout << "No\n";
		else cout << "Yes\n";
	}
	return 0;
}