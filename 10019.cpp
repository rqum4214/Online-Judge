#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, a = 0, b = 0;
		cin >> n;
		for(int i = 1 ; i <= n ; i <<= 1) {
			if(n & i) a ++;
		}
		while(n) {
			int m = n % 10;
			for(int i = 1 ; i < 16 ; i <<= 1) {
				if(m & i) b ++;
			}
			n /= 10;
		}
		cout << a << " " << b << endl;
	}
	return 0;
}