#include <iostream>
#include <deque>
using namespace std;

int main() {
	int n;
	while(cin >> n && n) {
		deque<int> d;
		for(int i = 1 ; i <= n ; i ++) d.push_back(i);
		cout << "Discarded cards:";
		int a = 0;
		while(d.size() != 1) {
			if(a++) cout << ", " << d[0];
			else cout << " " << d[0];
			d.pop_front();
			d.push_back(d[0]);
			d.pop_front();
		}
		cout << "\nRemaining card: " << d[0] << endl;
	}
	return 0;
}