#include <iostream>
#include <string>
using namespace std;

int main() {
	int c;
	while(cin >> c && c) {
		int d[7] = {0, 1, 2, 3, 4, 5, 6};
		string s;
		cin >> ws;
		while(c --) {
			getline(cin, s);
			int t = d[1];
			if(s == "north") {
				d[1] = d[5];
				d[5] = d[6];
				d[6] = d[2];
				d[2] = t;
			}
			else if(s == "east") {
				d[1] = d[3];
				d[3] = d[6];
				d[6] = d[4];
				d[4] = t;
			}
			else if(s == "south") {
				d[1] = d[2];
				d[2] = d[6];
				d[6] = d[5];
				d[5] = t;
			}
			else {
				d[1] = d[4];
				d[4] = d[6];
				d[6] = d[3];
				d[3] = t;
			}
		}
		cout << d[1] << endl;
	}
	return 0;
}