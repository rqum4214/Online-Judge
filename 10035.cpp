#include <iostream>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b && !(a == 0 && b == 0)) {
		int o = 0, c = 0;
		while(a>0 || b>0) {
			if(a%10 + b%10 + c >= 10) {
				c = 1;
				o ++;
			}
			else c = 0;
			a /= 10;
			b /= 10;
		}
		if(o) cout << o << " carry operation" << ((o == 1)? ".\n" : "s.\n");
		else cout << "No carry operation.\n";
	}
	return 0;
}