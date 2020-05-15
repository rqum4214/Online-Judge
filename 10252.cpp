#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string a, b;
	int c[256] = {}, d[256] = {};
	while(getline(cin, a) && getline(cin, b)) {
		for(int i = 0 ; i < a.size() ; i ++) {
			c[a[i]] ++;
		}
		for(int i = 0 ; i < b.size() ; i ++) {
			d[b[i]] ++;
		}
		for(char i = 'a' ; i <= 'z' ; i ++) {
			int m = min(c[i], d[i]);
			if(m) {
				cout << string(m, i);
			}
			c[i] = 0;
			d[i] = 0;
		}
		cout << endl;
	}
	return 0;
}