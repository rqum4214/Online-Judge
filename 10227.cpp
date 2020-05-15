#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	string rc[100];
	stringstream ss;
	while(c --) {
		int p, t;
		cin >> p >> t;
		cin.get();
		for(int i = 1 ; i <= p ; i ++) rc[i] = string(100, '0');
		string s;
		while(getline(cin, s) && s != "") {
			ss.clear();
			ss << s;
			int a, b;
			ss >> a >> b;
			rc[a][b] = '1';
		}
		set<string> st;
		for(int i = 1 ; i <= p ; i ++) st.insert(rc[i]);
		cout << st.size() << endl;
		if(c) cout << endl;
	}
	return 0;
}