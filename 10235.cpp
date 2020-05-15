#include <iostream>
#include <cmath>
using namespace std;

bool ip(int n) {
	int a = sqrt(n);
	for(int i = 2 ; i <= a ; i ++) {
		if(n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	while(cin >> n) {
		cout << n;
		if(n == 2) cout << "is prime.\n";
		else if(ip(n)) {
			int r = 0, t = n;
			while(t) {
				r = r*10 + t%10;
				t /= 10;
			}
			if(r != n && ip(r)) cout << " is emirp.\n";
			else cout << " is prime.\n";
		}
		else cout << " is not prime.\n";
	}
	return 0;
}