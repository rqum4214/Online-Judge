#include <bits/stdc++.h>
using namespace std;

int main() {
	int d;
	string p = "22233344455566677778889999";
	cin >> d;
	while(d --) {
		int n;
		cin >> n;
		string s;
		getline(cin, s);
		map<string, int> m;
		while(n --) {
			getline(cin, s);
			string b = "";
			for(int i = 0 ; i < s.size() ; i ++) {
				if(s[i] == '-') continue;
				if(b.size() == 3) b += '-';
				if(s[i] >= 'A' && s[i] <= 'Z') b += p[s[i]-'A'];
				else b += s[i];
			}
			m[b] ++;
		}
		map<string, int>::iterator it;
		bool no = true;
		for(it = m.begin() ; it != m.end() ; it ++) {
			if(it->second > 1) {
				cout << it->first << " " << it->second << endl;
				no = false;
			}
		}
		if(no) cout << "No duplicates.\n";
		if(d) cout << endl;
	}
	return 0;
}