#include <bits/stdc++.h>
using namespace std;

int main() {
	int m, n;
	while(cin >> m >> n && !(m == 1 && n == 1)) {
		int lu = 0, ld = 1, ru = 1, rd = 0;
		while(1) {
			int u = lu+ru, d = ld+rd;
			if(u == m && n == d) break;
			else if(u*n < m*d) {
				lu = u;
				ld = d;
				cout << "R";
			}
			else {
				ru = u;
				rd = d;
				cout << "L";
			}
		}
		cout << endl;
	}
	return 0;
}