#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, x[100], y[100];
	while(cin >> n && n) {
		for(int i = 0 ; i < 2*n ; i ++) cin >> x[i] >> y[i];
		bool find = false;
		for(int a = -500 ; !find && a <= 500 ; a ++) {
			for(int b = -500 ; !find && b <= 500 ; b ++) {
				int l = 0, r = 0;
				for(int i = 0 ; i < 2*n ; i ++) {
					l += (a*x[i]+b*y[i]>0);
					r += (a*x[i]+b*y[i]<0);
				}
				if(l == n && r == n) {
					cout << a << " " << b << endl;
					find = true;
				}
			}
		}
	}
	return 0;
}