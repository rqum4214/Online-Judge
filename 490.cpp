#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string s;
	vector<string> v;
	int n = 0;
	while(getline(cin, s)) {
		v.push_back(s);
		if(s.size() > n) n = s.size();
	}
	for(int i = 0 ; i < n ; i ++) {
		for(int j = v.size()-1 ; j >= 0 ; j --) {
			if(i < v[j].size()) {
				cout << v[j][i];
			}
			else {
				cout << " ";
			}
		}
		cout << endl;
	}
	return 0;
}