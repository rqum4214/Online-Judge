#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {
	int l, a[256] = {};
	string s;
	cin >> l;
	getline(cin, s);
	while(l --) {
		getline(cin, s);
		for(int i = 0 ; i < s.size() ; i ++)
			a[toupper(s[i])] ++;
	}
	int max = 0;
	for(int i = 'A' ; i <= 'Z' ; i ++) {
		if(a[i] > max) max = a[i];
	}
	for(int i = max ; i > 0 ; i --) {
		for(char j = 'A' ; j <= 'Z' ; j ++) {
			if(a[j] == i) {
				cout << j << " " << i << endl;
			}
		}
	}
		return 0 ;
}