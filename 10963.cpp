#include <bits/stdc++.h>
using namespace std;

int main() {
	int c;
	cin >> c;
	while(c --) {
		int w;
		cin >> w;
		vector<int> v;
		while(w --) {
			int y1, y2;
			cin >> y1 >> y2;
			v.push_back(y1-y2);
		}
		bool y = true;
		for(int i = 1 ; i < v.size() ; i ++) {
			if(v[i] != v[i-1]) {
				y = false;
				break;
			}
		}
		cout << ((y)? "yes" : "no") << endl;
		if(c) cout << endl;
	}
	return 0;
}