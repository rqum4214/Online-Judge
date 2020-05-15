#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	long long a;
	int c = 1;
	vector<string> v;
	while(cin >> a) {
		if(!a) {
			cout << setw(4) << c ++ << ". 0\n";
			continue;
		}
		while(a) {
			int n = a % 100;
			if(n) v.push_back(to_string(n));
			a /= 100;
			if(a) {
				n = a % 10;
				if(n) {
					v.push_back("shata");
					v.push_back(to_string(n));
				}
			}
			else break;
			a /= 10;
			if(a) {
				n = a % 100;
				if(n) {
					v.push_back("hajar");
					v.push_back(to_string(n));
				}
			}
			else break;
			a /= 100;
			if(a) {
				n = a % 100;
				if(n) {
					v.push_back("lakh");
					v.push_back(to_string(n));
				}
			}
			else break;
			a /= 100;
			if(a) v.push_back("kuti");
		}
		cout << setw(4) << c ++ << ".";
		for(int i = v.size()-1 ; i >= 0 ; i --) cout << " " << v[i];
		cout << endl;
		v.clear();
	}
	return 0;
}