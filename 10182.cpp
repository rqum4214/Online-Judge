#include <iostream>
using namespace std;

struct p {
	int x, y;
};

int main() {
	p c[100000];
	int a = 0, b = 0, ix = 2;
	c[1].x = a;
	c[1].y = b;
	for(int i = 1 ; ix < 100000 ; i ++) {
		c[ix].x = a;
		c[ix++].y = ++b;
		for(int j = 0 ; j < i-1 && ix < 100000 ; j ++) {
			c[ix].x = --a;
			c[ix++].y = ++b;
		}
		for(int j = 0 ; j < i && ix < 100000 ; j ++) {
			c[ix].x = --a;
			c[ix++].y = b;
		}
		for(int j = 0 ; j < i && ix < 100000 ; j ++) {
			c[ix].x = a;
			c[ix++].y = --b;
		}
		for(int j = 0 ; j < i && ix < 100000 ; j ++) {
			c[ix].x = ++a;
			c[ix++].y = --b;
		}
		for(int j = 0 ; j < i && ix < 100000 ; j ++) {
			c[ix].x = ++a;
			c[ix++].y = b;
		}
		for(int j = 0 ; j < i && ix < 100000 ; j ++) {
			c[ix].x = a;
			c[ix++].y = ++b;
		}
	}
	int n;
	while(cin >> n) cout << c[n].x << " " << c[n].y << endl;
	return 0;
}