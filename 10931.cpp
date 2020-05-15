#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	while(cin >> n && n) {
		vector<int> v;
		int p = 0;
		while(n) {
			int i = n & 1;
			v.push_back(i);
			if(i) p ++;
			n >>= 1;
		}
		cout << "The parity of ";
		for(int i = v.size()-1 ; i >= 0 ; i --) cout << v[i];
		cout << " is " << p << " (mod 2).\n";
	}
	return 0;
}