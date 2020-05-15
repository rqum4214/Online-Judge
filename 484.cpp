#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> v;
	map<int, int> m;
	while(cin >> n) {
		if(m[n] == 0) v.push_back(n);
		m[n] ++;
	}
	for(int i = 0 ; i < v.size(); i ++) cout << v[i] << " " << m[v[i]] << endl;
	return 0;
}