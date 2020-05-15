#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	while(cin >> s && s != "0") {
		int a = 0, b = 0;
		for(int i = 0 ; i < s.size() ; i ++) {
			((i % 2)? a : b) += s[i] - '0'; 
		}
		cout << s << (((a - b) % 11)? " is not" : " is") << " a multiple of 11.\n";
	}
	return 0;
}