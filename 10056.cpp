#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, x;
		double o, p, q;
		cin >> n >> p >> x;
		q = 1 - p;
		if(p) o = p * pow(q, x-1) / (1 - pow(q, n));
		else o = 0;
		cout << fixed << setprecision(4) << o << endl;
	}
	return 0;
}