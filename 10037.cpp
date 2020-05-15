#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, t[1000], o = 0;
		cin >> n;
		for(int i = 0 ; i < n ; i ++) cin >> t[i];
		sort(t, t+n);
		int l;
		for(l = n-1 ; l >= 3 ; l -= 2) o += min(t[0]+t[1]+t[1]+t[l], t[0]+t[0]+t[l-1]+t[l]);
		if(l == 2) o += t[0]+t[1]+t[2];
		else if(l == 1) o += t[1];
		else o += t[0];
		cout << o << endl;
		for(l = n-1 ; l >= 3 ; l -= 2) {
			if(t[0]+t[l-1] > t[1]+t[1]) {
				cout << t[0] << " " << t[1] << endl;
				cout << t[0] << endl;
				cout << t[l-1] << " " << t[l] << endl;
				cout << t[1] << endl;
			}
			else {
				cout << t[0] << " " << t[l] << endl;
				cout << t[0] << endl;
				cout << t[0] << " " << t[l-1] << endl;
				cout << t[0] << endl;
			}
		}
		if(l == 2) cout << t[0] << " " << t[l] << endl << t[0] << endl << t[0] << " " << t[l-1] << endl;
		else if(l == 1) cout << t[0] << " " << t[1] << endl;
		else cout << t[0] << endl;
		if(c) cout << endl;
	}
	return 0;
}