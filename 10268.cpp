#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	long long x;
	while(cin >> x) {
		string l;
		getline(cin, l);
		stringstream ss;
		long long c, o = 0;
		vector<long long> v;
		getline(cin, l);
		ss << l;
		while(ss >> c) v.push_back(c);
		long long a = 1, b = 1;
		for(int i = v.size()-2 ; i >= 0 ; i --) {
			o += v[i] * a * b;
			a ++;
			b *= x;
		}
		cout << o << endl;
	}
	return 0;
}