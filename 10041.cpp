#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
using namespace std;

int main() {
	int c, rn, sn;
	vector<int> v;
	cin >> c;
	while(c --) {
		cin >> rn;
		for(int i = 0 ; i < rn ; i ++) {
			cin >> sn;
			v.push_back(sn);
		}
		sort(v.begin(), v.end());
		int mid = v[rn/2], o = 0;
		for(int i = 0 ; i < rn ; i ++) {
			o += abs(mid - v[i]);
		}
		cout << o << endl;
		v.clear();
	}
	
	return 0;
}