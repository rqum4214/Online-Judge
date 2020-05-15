#include <iostream>
using namespace std;

int main() {
	int t, cs = 1;
	cin >> t;
	while(t --) {
		long long a, b, c, d, o;
		cin >> a >> b >> c >> d;
		o = (1+c+d)*(c+d)/2+c;
		o -= (1+a+b)*(a+b)/2+a;
		cout << "Case " << cs++ << ": " << o << endl;
	}
	return 0;
}