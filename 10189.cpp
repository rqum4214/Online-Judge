#include <iostream>
using namespace std;

int main() {
	int n, m, c = 0;
	while(cin >> n >> m && !(n == 0 && m == 0)) {
		if(c ++) cout << endl;
		cout << "Field #" << c << ":\n";
		char f[102][102] = {};
		for(int i = 1 ; i <= n ; i ++) {
			for(int j = 1 ; j <= m ; j ++) {
				cin >> f[i][j];
			}
		}
		for(int i = 1 ; i <= n ; i ++) {
			for(int j = 1 ; j <= m ; j ++) {
				if(f[i][j] == '*') cout << '*';
				else cout << (f[i-1][j-1]=='*')+(f[i-1][j]=='*')+(f[i-1][j+1]=='*')+(f[i][j-1]=='*')+(f[i][j+1]=='*')+(f[i+1][j-1]=='*')+(f[i+1][j]=='*')+(f[i+1][j+1]=='*');
			}
			cout << endl;
		}
	}
	return 0;
}