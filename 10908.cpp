#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t --) {
		int m, n, q;
		char r[102][102] = {};
		cin >> m >> n >> q;
		cout << m << " " << n << " " << q << endl;
		for(int i = 1 ; i <= m ; i ++) {
			for(int j = 1; j <= n ; j ++) {
				cin >> r[i][j];
			}
		}
		while(q --) {
			int x, y, o = 1;
			cin >> x >> y;
			x ++;
			y ++;
			char c = r[x][y];
			bool s = false;
			while(1) {
				for(int i = y-o ; i <= y+o ; i ++) {
					if(r[x-o][i] != c || r[x+o][i] != c) s = true;
				}
				for(int i = x-o+1 ; i < x+o ; i ++) {
					if(r[i][y-o] != c || r[i][y+o] != c) s = true;
				}
				if(s) break;
				o ++;
			}
			cout << o*2-1 << endl;
		}
	}
	return 0;
}