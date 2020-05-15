#include <bits/stdc++.h>
using namespace std;

int main() {
	string r;
	while(getline(cin, r)) {
		int s = 0, x;
		for(x = r.size()-1 ; x >= 0 ; x --) {
			if(r[x] >= 'p' && r[x] <= 'z') s ++;
			else if(r[x] == 'N') {
				if(!s) break;
			}
			else {
				if(s >= 2) s --;
				else break;
			}
		}
		if(x != -1 || s != 1) cout << "NO\n";
		else cout << "YES\n";
	}
	return 0;
}