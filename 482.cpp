#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	string s;
	getline(cin, s);
	while(c --) {
		getline(cin, s);
		getline(cin, s);
		stringstream ss(s);
		vector<int> v;
		int t;
		while(ss >> t) v.push_back(t);
		map<int, string> m;
		for(int i = 0 ; i < v.size() ; i ++) cin >> m[v[i]];
		getline(cin, s);
		map<int, string>::iterator it;
		for(it = m.begin() ; it != m.end() ; it ++) cout << it->second << endl;
		if(c) cout << endl;
	}
	return 0;
}