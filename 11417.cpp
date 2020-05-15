#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if(!b) return a;
	while((a%=b) && (b%=a)) ;
	return a+b;
}

int main() {
	int n, g[501] = {};
	for(int i = 2 ; i <= 500 ; i ++) {
		g[i] = g[i-1];
		for(int j = 1 ; j < i ; j ++) g[i] += gcd(j, i);
	}
	while(cin >> n && n) {
		cout << g[n] << endl;
	}
	return 0;
}