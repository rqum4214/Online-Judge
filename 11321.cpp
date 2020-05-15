#include <iostream>
#include <algorithm>
using namespace std;

struct md {
	int a, b;
};

bool cmp(md x, md y) {
	if(x.b != y.b) return x.b < y.b;
	if(x.a%2 && y.a%2== 0) return true;
	if(x.a%2 == 0 && y.a%2) return false;
	if(x.a%2 && y.a%2) return x.a > y.a;
	if(x.a%2 == 0 && y.a%2 == 0) return x.a < y.a;
}

md d[10000];

int main() {
	int m, n;
	while(cin >> m >> n && !(m == 0 && n == 0)) {
		for(int i = 0 ; i < m ; i ++) {
			cin >> d[i].a;
			d[i].b = d[i].a % n;
		}
		sort(d, d+m, cmp);
		cout << m << " " << n << endl;
		for(int i = 0 ; i < m ; i ++) cout << d[i].a << endl;
	}
	cout << m << " " << n << endl;
	return 0;
}