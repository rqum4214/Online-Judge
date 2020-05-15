#include <iostream>
#include <vector>
using namespace std;

int main() {
	int a, b;
	while(cin >> a >> b) {
		if(a <= 1 || b <= 1) {
			cout << "Boring!\n";
			continue;
		}
		vector<int> v;
		v.push_back(a);
		while(a != 1) {
			if(a % b) break;
			a /= b;
			v.push_back(a);
		}
		if(a == 1) {
			cout << v[0];
			for(int i = 1 ; i < v.size() ; i ++) cout << " " << v[i];
			cout << endl;
		}
		else cout << "Boring!\n";
	}
	return 0;
}