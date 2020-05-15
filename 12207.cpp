#include <bits/stdc++.h>
using namespace std;

int main() {
	int p, c, cs = 1;
	while(cin >> p >> c && !(p == 0 && c == 0)) {
		cout << "Case " << cs++ << ":\n";
		list<int> l;
		if(p >= 1000) {
			for(int i = 1 ; i <= 1000 ; i ++) l.push_back(i);
		}
		else {
			for(int i = 1 ; i <= p ; i ++) l.push_back(i);
		}
		while(c --) {
			char c;
			cin >> c;
			if(c == 'N') {
				cout << l.front() << endl;
				l.push_back(l.front());
				l.pop_front();
			}
			else {
				int e;
				cin >> e;
				l.remove(e);
				l.push_front(e);
			}
		}
	} 
	return 0;
}