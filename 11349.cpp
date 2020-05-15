#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	int t, c = 1;
	cin >> t;
	while(t --) {
		long long n, m;
		string s;
		bool sym = true;
		cin >> s >> s >> n;
		vector<long long> v;
		n *= n;
		for(int i = 0 ; i < n ; i ++) {
			cin >> m;
			v.push_back(m);
		}
		for(int i = 0 ; i <= (n-1) / 2 ; i ++) {
			if(v[i] != v[n-1-i] || v[i] < 0) {
				sym = false;
				break;
			}
		}
		cout << "Test #" << c++ << ": " << ((sym)? "Symmetric.\n" : "Non-symmetric.\n");
	}
	return 0;
}