#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string s;
	getline(cin, s);
	while(t --) {
		getline(cin, s);
		int q = sqrt(s.size());
		if(s.size() == q*q) {
			for(int i = 0 ; i < q ; i ++) {
				for(int j = 0 ; j < q ; j ++) {
					cout << s[j*q+i];
				}
			}
			cout << endl;
		}
		else cout << "INVALID\n";
	}
	return 0;
}