#include <iostream>
using namespace std;

int main() {
	char c;
	int a = 1;
	while(cin.get(c)) {
		if(c == '"') {
			cout << ((a++ % 2)? "``" : "''");
		}
		else cout << c;
	}
	return 0;
}