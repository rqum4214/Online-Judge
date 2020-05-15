#include <bits/stdc++.h>
using namespace std;

int x[1000001] = {0, 1, 2, 3};

int main() {
	int t, cs = 1;
	cin >> t;
	while(t --) {
		int n, m, k;
		cin >> n >> m >> k;
		for(int i = 4 ; i <= n ; i ++) x[i] = (x[i-1]+x[i-2]+x[i-3])%m+1;
		int o = n+1, p[101] = {}, c = 0;
		queue<int> q;
		for(int i = 1 ; i <= n ; i ++) {
			if(x[i] <= k) {
				if(p[x[i]] == 0) c ++;
				q.push(i);
				p[x[i]] = i;
				if(c == k) {
					while(q.front() != p[x[q.front()]]) q.pop();
					o = min(o, q.back()-q.front()+1);
				}
			}
		}
		cout << "Case " << cs++ << ": " ;
		if(o < n) cout << o << endl;
		else cout << "sequence nai\n";
	}
	return 0;
}