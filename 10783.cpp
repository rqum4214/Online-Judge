#include <iostream>
using namespace std;

int main() {
	int c, n = 1;
	cin >> c;
	while(c --) {
		int a, b, o = 0;
		cin >> a >> b;
		for(a |= 1 ; a <= b ; a += 2) o += a;
		cout << "Case " << n++ << ": " << o << endl;
	}
	return 0;
}