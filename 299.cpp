#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n --) {
		int l, c[50] = {}, o = 0;
		cin >> l;
		for(int i = 0 ; i < l ; i ++) cin >> c[i];
		for(int i = 1 ; i < l ; i ++) {
			for(int j = 0 ; j < i ; j ++ ) {
				if(c[j] > c[i]) o ++;
			}
		}
		cout << "Optimal train swapping takes " << o << " swaps.\n";
	}
	return 0;
}