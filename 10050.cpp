#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t --) {
		int n, p, d[3651] = {}, h, o = 0;
		cin >> n >> p;
		for(int i = 0 ; i < p ; i ++) {
			cin >> h;
			for(int j = h ; j <= n ; j += h) d[j] = 1;
		}
		for(int i = 1 ; i <= n ; i ++) {
			if(i%7 != 6 && i%7 && d[i]) o ++;
		}
		cout << o << endl;
	}
	return 0;
}