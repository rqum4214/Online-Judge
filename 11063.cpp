#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
	int n, c = 1;
	while(cin >> n) {
		int b, ck = 0;
		bool bt = true;
		vector<int> v;
		for(int i = 0 ; i < n ; i ++) {
			cin >> b;
			v.push_back(b);
			if(v[i] <= ck) bt = false;
			else ck = v[i];
		}
		set<int> s;
		for(int i = 0 ; i < n ; i ++ ) {
			for(int j = i ; j < n ; j ++) {
				int a = v[i] + v[j];
				if(s.count(a)) bt = false;
				else s.insert(a);
			}
		}
		cout << "Case #" << c++ << ": It is " << ((bt)? "" : "not ") << "a B2-Sequence.\n\n";
	}
	return 0;
}