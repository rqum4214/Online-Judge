#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	while(cin >> n >> m) {
		long long o = 1;
		for(int i = n ; i > n-m ; i --) {
			o *= i;
			while(o%10 == 0) o /= 10;
			o %= 10000000000;
		}
		cout << o%10 << endl;
	}
	return 0;
}