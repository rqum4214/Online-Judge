#include <bits/stdc++.h>
using namespace std;

int s[50001];

int fd(int x) {
	if(x != s[x]) s[x] = fd(s[x]);
	return s[x];
}

int main() {
	int n, m, cs = 1;
	while(cin >> n >> m && n+m) {
		for(int i = 1 ; i <= n ; i ++) s[i] = i;
		while(m --) {
			int a, b;
			cin >> a >> b;
			a = fd(a);
			b = fd(b);
			if(a != b) {
				s[a] = b;
				n --;
			}
		}
		cout << "Case " << cs++ << ": " << n << endl;
	} 
	return 0;
}