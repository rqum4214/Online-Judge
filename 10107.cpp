#include <bits/stdc++.h>
using namespace std;

int main() {
	int n[10000], x = 0;
	while(cin >> n[x++]) {
		sort(n, n+x);
		cout << (n[(x-1)/2] + n[x/2])/2 << endl;
	}
	return 0;
}