#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	while(k --) {
		int n;
		cin >> n;
		string t[200], f[200], s;
		getline(cin, s);
		for(int i = 0 ; i < n ; i ++) getline(cin, t[i]);
		for(int i = 0 ; i < n ; i ++) getline(cin, f[i]);
		int x = n-1;
		for(int i = n-1 ; i >= 0 ; i --) {
			if(t[i] == f[x]) x --;
		}
		for(int i = x ; i >= 0 ; i --) cout << f[i] << endl;
		cout << endl;
	}
	return 0;
}