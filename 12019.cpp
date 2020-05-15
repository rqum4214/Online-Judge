#include <iostream>
#include <string>
using namespace std;

int main() {
	int c;
	int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
	string week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	cin >> c;
	while(c --) {
		int m, d;
		cin >> m >> d;
		for(int i = 0 ; i < m-1 ; i ++) d += day[i];
		cout << week[(d+5)%7] << endl;
	}
	return 0;
}