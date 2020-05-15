#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b && !(a==0 && b==0)) {
		int c = sqrt(a), d = sqrt(b);
		if(a == c*c) cout << d-c+1 << endl;
		else cout << d-c << endl;
	}
	return 0;
}