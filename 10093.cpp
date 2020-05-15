#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
	string r;
	map<char, int> m;
	for(char i = '0' ; i <= '9' ; i ++) m[i] = i - '0';
	for(char i = 'A' ; i <= 'Z' ; i ++) m[i] = i - 'A' + 10;
	for(char i = 'a' ; i <= 'z' ; i ++) m[i] = i - 'a' + 36;
	while(cin >> r) {
		int n = 2;
		for(int i = 0 ; i < r.size() ; i ++) {
			if(m[r[i]] >= n) n = m[r[i]] + 1;
		}
		while(n <= 62) {
			int o = 0;
			for(int i = r.size()-1; i >= 0 ; i --) {
				o += m[r[i]];
			}
			if(o % (n-1) == 0) break;
			n ++;
		}
		if(n == 63) cout << "such number is impossible!\n";
		else cout << n << endl;
	}
	return 0;
}