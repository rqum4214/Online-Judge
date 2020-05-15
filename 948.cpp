#include <iostream>
#include <vector>
using namespace std;

int main() {
	int c;
	cin >> c;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	for(int i = 1 ; v[i] < 100000000 ; i ++) v.push_back(v[i-1] + v[i]);
	while(c --) {
		int n, s;
		cin >> n;
		for(s = v.size()-1 ; s >= 0 ; s --) {
			if(n >= v[s]) break;
		}
		cout << n << " = ";
		for( ; s >= 0 ; s --) {
			if(n >= v[s]) {
				cout << "1";
				n -= v[s];
			}
			else cout << "0";
		}
		cout << " (fib)\n";
	}
	return 0;
}