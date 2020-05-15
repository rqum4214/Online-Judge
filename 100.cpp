#include <iostream>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b) {
		int o = INT_MIN;
		for(int i = min(a, b) ; i <= max(a, b) ; i ++) {
			int c = 1, n = i;
			while(n != 1) {
				n = (n % 2)? n*3+1 : n/2;
				c ++;
			}
			if(c > o) o = c;
		}
		cout << a << " " << b << " " << o << endl;
	}
	return 0;
}