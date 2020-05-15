#include <iostream>
#include <string>
using namespace std;

int main() {
	int c;
	string s;
	cin >> c;
	getline(cin, s);
	while(c --) {
		string x = "0000000000", t;
		int f[10] = {};
		getline(cin, s);
		for(int i = 0 ; i < s.size() ; i ++) {
			switch(s[i]) {
				case 'c':
					t = "0111001111";
					break;
				case 'd':
					t = "0111001110";
					break;
				case 'e':
					t = "0111001100";
					break;
				case 'f':
					t = "0111001000";
					break;
				case 'g':
					t = "0111000000";
					break;
				case 'a':
					t = "0110000000";
					break;
				case 'b':
					t = "0100000000";
					break;
				case 'C':
					t = "0010000000";
					break;
				case 'D':
					t = "1111001110";
					break;
				case 'E':
					t = "1111001100";
					break;
				case 'F':
					t = "1111001000";
					break;
				case 'G':
					t = "1111000000";
					break;
				case 'A':
					t = "1110000000";
					break;
				case 'B':
					t = "1100000000";
					break;
			}
			for(int i = 0 ; i < 10 ; i ++) {
				if(t[i] == '1' && x[i] == '0') f[i]++;
			}
			x = t;
		}
		for(int i = 0 ; i < 10 ; i ++) {
			if(i) cout << " ";
			cout << f[i];
		}
		cout << endl;
	}
	return 0;
}