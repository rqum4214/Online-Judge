#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, m, q[100], o = 0, f[100] = {};
		cin >> n >> m;
		priority_queue<int> p;
		for(int i = 0 ; i < n ; i ++) {
			cin >> q[i];
			p.push(q[i]);
		}
		bool stop = false;
		while(1) {
			for(int i = 0 ; i < n ; i ++) {
				if(!f[i] && q[i] == p.top()) {
					o ++;
					if(i == m) {
						stop = true;
						break;
					}
					f[i] = 1;
					p.pop();
				}
			}
			if(stop) break;
		}
		cout << o << endl;
	}
	return 0;
}