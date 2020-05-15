#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, g[1000] = {}, t = 0, b = 0;
		cin >> n;
		for(int i = 0 ; i < n ; i ++) {
			cin >> g[i];
			t += g[i];
		}
		double a = t / n;
		for(int i = 0 ; i < n ; i ++) {
			if(g[i] > a) b ++;
		}
		cout << fixed << setprecision(3) << (double)b/n*100 << "%\n";
	}
	return 0;
}