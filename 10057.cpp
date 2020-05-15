#include <iostream>
#include <algorithm>
using namespace std;

int x[1000000];

int main() {
	int n;
	while(cin >> n) {
		for(int i = 0 ; i < n ; i ++) cin >> x[i];
		sort(x, x+n);
		int a = x[(n-1)/2], b = x[n/2], o = 0;
		for(int i = 0 ; i < n ; i ++) {
			if(x[i] == a || x[i] == b) o ++;
		}
		cout << x[(n-1)/2] << " " << o << " " << b-a+1 << endl;
	}
	return 0;
}