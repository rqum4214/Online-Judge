#include <iostream>
#include <string>
using namespace std;

int tint(string s) {
	int r = 0;
	for(int i = 0 ; i < s.size() ; i ++) {
		r <<= 1;
		if(s[i] == '1') r |= 1;
	}
	return r;
}

int gcd(int a, int b) {
	if(!b) return a;
	while((a%=b) && (b%=a)) ;
	return a+b;
}

int main() {
	int n, p = 1;
	cin >> n;
	while(n --) {
		string a, b;
		cin >> a >> b;
		int c = tint(a), d = tint(b);
		cout <<"Pair #" << p++;
		if(gcd(c, d) > 1) cout << ": All you need is love!\n";
		else cout << ": Love is not all you need!\n";
	}
	return 0;
}