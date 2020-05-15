#include <iostream>
#include <cstdlib>
#include <set>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		int a, b;
		set<int> s;
		cin >> a;
		for(int i = 1 ; i < n ; i ++) {
			cin >> b;
			a = abs(a-b);
			if(a && a < n) s.insert(a);
			a = b;
		}
		cout << ((s.size() == n-1)? "Jolly" : "Not jolly") << endl;
	}
	return 0;
}