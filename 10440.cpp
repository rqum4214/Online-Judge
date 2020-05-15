#include <bits/stdc++.h>
using namespace std;

int main() {
	int c, a[1440];
	cin >> c;
	while(c --) {
		int n, t, m;
		cin >> n >> t >> m;
		for(int i = 0 ; i < m ; i ++) cin >> a[i];
		int o = 0;
		for(int i = (m+n-1)%n ; i < m ; i += n) {
			o = max(a[i], o) + t*2;
		}
		cout << o-t << " " << (m+n-1)/n << endl;
	}
	return 0;
}