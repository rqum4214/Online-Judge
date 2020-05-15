#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	int l;
	string s;
	map<string, int> m;
	cin >> l;
	while(l --) {
		cin >> s;
		m[s] ++;
		getline(cin, s);
	}
	map<string, int>::iterator it;
	for(it = m.begin() ; it != m.end() ; it ++)
		cout << it->first << " " << it->second << endl;
	return 0;
}