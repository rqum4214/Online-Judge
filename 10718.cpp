#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n, l, u;
	while(cin >> n >> l >> u) {
		long long o = 0;
		for(int i = 31 ; i >= 0 ; i --) {
			long long t = 1LL << i;
			if(t&n) {
				if(t+o <= l) o |= t;
			}
			else {
				if(t+o <= u) o |= t;
			}
		}
		cout << o << endl;
	}
	return 0;
}