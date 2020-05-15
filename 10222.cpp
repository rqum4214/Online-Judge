#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
	string a = "`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
	char c;
	while(cin.get(c)) {
		c = tolower(c);
		size_t f = a.find(c);
		if(f != string::npos) {
			cout << a[f-2];
		}
		else {
			cout << c;
		}
	}
	return 0;
}