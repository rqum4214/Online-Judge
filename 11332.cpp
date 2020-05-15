#include <iostream>
using namespace std;

int main() {
	int a;
	while(cin >> a && a) {
		while(a >= 10) {
			int b = 0;
			while(a) {
				b += a%10;
				a /= 10;
			}
			a = b;
		}
		cout << a << endl;
	}
	return 0;
}