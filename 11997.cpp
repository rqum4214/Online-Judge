#include <bits/stdc++.h>
using namespace std;

struct d{
	int a, b;
	bool operator <(const d &x) const {
		return a > x.a;
	}
};

int n[750][750];

int main() {
	int k;
	while(cin >> k) {
		for(int i = 0 ; i < k ; i ++) {
			for(int j = 0 ; j < k ; j ++) {
				cin >> n[i][j];
			}
		}
		for(int i = 0 ; i < k ; i ++) sort(n[i], n[i]+k);
		for(int i = 1 ; i < k ; i ++) {
			priority_queue<d> p;
			for(int j = 0 ; j < k ; j ++) p.push({n[0][j]+n[i][0], 0});
			for(int j = 0 ; j < k-1 ; j ++) {
				d t = p.top();
				p.pop();
				n[0][j] = t.a;
				p.push({t.a-n[i][t.b]+n[i][t.b+1], t.b+1});
			}
			n[0][k-1] = p.top().a;
		}
		for(int i = 0 ; i < k ; i ++) {
			if(i) cout << " ";
			cout << n[0][i];
		}
		cout << endl;
	}
	return 0;
}