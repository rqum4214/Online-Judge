#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	int l = 0;
	while(getline(cin, s)) {
		if(l ++) cout << endl;
		int a[256] = {}, m = 0;
		for(int i = 0 ; i < s.size() ; i ++) {
			a[s[i]] ++;
			if(m < a[s[i]]) m = a[s[i]];
		}
		for(int i = 1 ; i <= m ; i ++) {
			for(int j = 127 ; j >= 32 ; j --) {
				if(a[j] == i) cout << j << " " << i << endl;
			}
		}
	}
	return 0;
}