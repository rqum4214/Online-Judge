#include <bits/stdc++.h>
using namespace std;

vector<int> v;

int fd(int x) {
	if(x != v[x]) v[x] = fd(v[x]);
	return v[x];
}

int main() {
	int c;
	cin >> c;
	while(c --) {
		int n, su = 0, un = 0;
		cin >> n;
		cin.get();
		v.resize(n+1);
		for(int i = 1 ; i <= n ; i ++) v[i] = i;
		string s;
		stringstream ss;
		while(getline(cin, s) && s != "") {
			ss.clear();
			ss << s;
			char co;
			int c1, c2;
			ss >> co >> c1 >> c2;
			int a = fd(c1), b = fd(c2);
			if(co == 'c') {
				if(a != b) v[a] = b;
			}
			else {
				if(a == b) su ++;
				else un ++;
			}
		}
		cout << su << "," << un << endl;
		if(c) cout << endl;
	}
	return 0;
}