#include <iostream>
using namespace std;

int main() {
	long long a, b;
	while(cin >> a >> b) {
		while(b > 0) {
			b -= a;
			a ++;
		}
		cout << --a << endl;
	}
	return 0;
}