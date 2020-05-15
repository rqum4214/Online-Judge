#include <bits/stdc++.h>
using namespace std;

int main() {
	int c, cs = 1;
	cin >> c;
	while(c --) {
		int n, a[10];
		cin >> n;
		for(int i = 0 ; i < n ; i ++) cin >> a[i];
		cout << "Case " << cs++ << ": " << a[n/2] << endl;
	}
	return 0;
}