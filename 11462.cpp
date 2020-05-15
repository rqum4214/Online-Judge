#include <bits/stdc++.h>
using namespace std;

int a[2000000];

int main() {
	int n;
	while(cin >> n && n) {
		for(int i = 0 ; i < n ; i ++) cin >> a[i];
		sort(a, a+n);
		for(int i = 0 ; i < n ; i ++) {
			if(i) cout << " ";
			cout << a[i];
		}
		cout << "\n";
	}
	return 0;
}