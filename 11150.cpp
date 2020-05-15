#include <iostream>
using namespace std;

int main() {
	int n ;
	while(cin >> n) {
		int o = n;
		while(n > 2) {
			o += n/3;
			n = n/3 + n%3;
		}
		cout << ((n == 2)? o+1 : o) << endl;
	}
	return 0;
}