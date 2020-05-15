#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(cin >> s && s != "0") {
		int n = 0;
		for(int i = 0 ; i < s.size() ; i ++) n += s[i] - '0';
		cout << s;
		if(n % 9) cout << " is not a multiple of 9.\n";
		else {
			int o = 1;
			while(n != 9) {
				int t = 0;
				while(n) {
					t += n % 10;
					n /= 10;
				}
				n = t;
				o ++;
			}
			cout << " is a multiple of 9 and has 9-degree " << o << ".\n";
		}
	}
	return 0;
}