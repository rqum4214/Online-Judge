#include <bits/stdc++.h>
using namespace std;

char g[102][102] = {};

void sc(int a, int b) {
	g[a][b] = '*';
	if(g[a-1][b-1] == '@') sc(a-1, b-1);
	if(g[a-1][b] == '@') sc(a-1, b);
	if(g[a-1][b+1] == '@') sc(a-1, b+1);
	if(g[a][b-1] == '@') sc(a, b-1);
	if(g[a][b+1] == '@') sc(a, b+1);
	if(g[a+1][b-1] == '@') sc(a+1, b-1);
	if(g[a+1][b] == '@') sc(a+1, b);
	if(g[a+1][b+1] == '@') sc(a+1, b+1);
}

int main() {
	int m, n;
	while(cin >> m >> n && m) {
		for(int i = 1 ; i <= m ; i ++) {
			for(int j = 1 ; j <= n ; j ++) {
				cin >> g[i][j];
			}
		}
		int o = 0;
		for(int i = 1 ; i <= m ; i ++) {
			for(int j = 1 ; j <= n ; j ++) {
				if(g[i][j] == '@') {
					sc(i, j);
					o ++;
				}
			}
		}
		cout << o << endl;
	}
	return 0;
}