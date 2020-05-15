#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, s[1000];
	while(cin >> n && n) {
		for(int i = 0 ; i < n ; i ++) cin >> s[i];
		sort(s, s+n);
		bool find = false;
		for(int d = n-1 ; !find && d >= 0 ; d --) {
			for(int a = 0 ; !find && a < n ; a ++) {
				if(a == d) continue;
				for(int b = a+1 ; !find && b < n ; b ++) {
					if(b == d) continue;
					for(int c = b+1 ; !find && c < n ; c ++) {
						if(c == d) continue;
						if(s[a]+s[b]+s[c] == s[d]) {
							cout << s[d] << endl;
							find = true;
						}
					}
				}
			}
		}
		if(!find) cout << "no solution\n";
	}
	return 0;
}