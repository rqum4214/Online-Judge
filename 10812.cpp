#include <iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int s, d, a, b;
		cin >> s >> d;
		a = (s + d) / 2;
		b = s - a;
		if(b >= 0 && (s+d) % 2 == 0) cout << a << " " << b << endl;
		else cout << "impossible\n";
	}
	return 0;
}