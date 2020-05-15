#include <bits/stdc++.h>
using namespace std;

int s[30001], p[30001];

int fd(int x) {
	if(x != s[x]) s[x] = fd(s[x]);
	return s[x];
}

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, m, o = 1;
		cin >> n >> m;
		for(int i = 1 ; i <= n ; i ++) {
			s[i] = i;
			p[i] = 1;
		}
		while(m --) {
			int a, b;
			cin >> a >> b;
			a = fd(a);
			b = fd(b);
			if(a != b) {
				s[a] = b;
				p[b] += p[a];
				if(p[b] > o) o = p[b];
			}
		}
		cout << o << endl;
	}
	return 0;
}