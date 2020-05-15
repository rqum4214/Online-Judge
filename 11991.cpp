#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m) {
		map<int, vector<int>> mp;
		int x;
		for(int i = 1 ; i <= n ; i ++) {
			cin >> x;
			mp[x].push_back(i);
		}
		while(m --) {
			int k, v;
			cin >> k >> v;
			if(mp[v].size() >= k) cout << mp[v][k-1] << endl;
			else cout << "0\n";
		}
	}
	return 0;
}