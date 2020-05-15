#include <bits/stdc++.h>
using namespace std;

string r;
stringstream ss;
long long v[50], s[50];

void cp(int n) {
	char c;
	int a;
	ss >> c >> a >> c;
	if(c == ']') {
		for(int i = 0 ; i < n ; i ++) v[i] = a;
	}
	else if(c == '+') {
		cp(n);
		ss >> c;
		for(int i = 0 ; i < n ; i ++) s[i] = v[i];
		v[0] = a;
		for(int i = 1 ; i < n ; i ++) v[i] = v[i-1]+s[i-1];
	}
	else {
		cp(n);
		ss >> c;
		for(int i = 0 ; i < n ; i ++) s[i] = v[i];
		v[0] = a*s[0];
		for(int i = 1 ; i < n ; i ++) v[i] = v[i-1]*s[i];
	}
}

int main() {
	int n;
	while(cin >> r >> n) {
		ss.str("");
		ss.clear();
		ss << r;
		cp(n);
		for(int i = 0 ; i < n ; i ++) {
			if(i) cout << " ";
			cout << v[i];
		}
		cout << endl;
	}
	return 0;
}