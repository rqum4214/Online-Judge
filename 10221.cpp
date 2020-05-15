#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	int a;
	string s;
	double b, pi = acos(-1);
	while(cin >> a >> b >> s) {
		double o1, o2;
		a += 6440;
		if(s == "min") b /= 60;
		if(b > 180) b = 360 - b;
		o1 = 2*a*pi*b/360;
		o2 = 2*a*sin(b/2*pi/180);
		cout << fixed << setprecision(6) << o1 << " " << o2 << endl;
	}
	return 0;
}