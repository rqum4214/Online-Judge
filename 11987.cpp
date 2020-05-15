#include <bits/stdc++.h>
using namespace std;

int s[200001], e[200001];
long long t[200001];

int fd(int x) {
	if(x != s[x]) s[x] = fd(s[x]);
	return s[x];
}

int main() {
	int n, m;
	while(cin >> n >> m) {
		for(int i = 1 ; i <= n ; i ++) {
			int j = i+100000;
			s[i] = j;
			s[j] = j;
			e[j] = 1;
			t[j] = i;
		}
		while(m --) {
			int c, a, b;
			cin >> c;
			if(c == 1) {
				cin >> a >> b;
				a = fd(a);
				b = fd(b);
				if(a != b) {
					s[a] = b;
					e[b] += e[a];
					t[b] += t[a];
				}
			}
			else if(c == 2) {
				int p;
				cin >> a >> b;
				p = fd(a);
				b = fd(b);
				if(p != b) {
					s[a] = b;
					e[p] --;
					e[b] ++;
					t[p] -= a;
					t[b] += a;
				}
			}
			else {
				cin >> a;
				a = fd(a);
				cout << e[a] << " " << t[a] << endl;
			}
		}
	}
	return 0;
}