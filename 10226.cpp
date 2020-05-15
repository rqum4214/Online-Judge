#include <iostream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	getline(cin, s);
	getline(cin, s);
	while(t --) {
		int n = 0;
		map<string, int> m;
		map<string, int>::iterator it;
		while(getline(cin, s) && s != "") {
			m[s] ++;
			n ++;
		}
		for(it = m.begin() ; it != m.end() ; it ++) {
			cout << fixed << setprecision(4) << it->first << " " << (double)it->second/n*100 << endl;
		}
		if(t) cout << endl;
	}
	return 0;
}