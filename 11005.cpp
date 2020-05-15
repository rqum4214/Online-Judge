#include <iostream>
#include <climits>
using namespace std;

int main() {
	int c, co[36], b[37], cs = 1;;
	cin >> c;
	while(c --) {
		for(int i = 0 ; i < 36 ; i ++) cin >> co[i];
		int q;
		cin >> q;
		cout << "Case " << cs++ << ":\n";
		while(q --) {
			int n, ch = INT_MAX;
			cin >> n;
			for(int i = 2 ; i <= 36 ; i ++) {
				int o = 0;
				for(int j = n ; j ; j /= i) o += co[j%i];
				b[i] = o;
				if(o < ch) ch = o;
			}
			cout << "Cheapest base(s) for number " << n << ":";
			for(int i = 2 ; i <= 36 ; i ++) {
				if(b[i] == ch) cout << " " << i;
			}
			cout << endl;
		}
	if(c) cout << endl;
	}
	return 0;
}