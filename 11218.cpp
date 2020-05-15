#include <bits/stdc++.h>
using namespace std;

int main() {
	int s[80], n, cs = 1;
	while(cin >> n && n) {
		bitset<10> bs[80];
		int o = -1;
		for(int i = 0 ; i < n ; i ++) {
			int a, b, c;
			cin >> a >> b >> c >> s[i];
			bs[i][a] = 1;
			bs[i][b] = 1;
			bs[i][c] = 1;
		}
		for(int i = 0 ; i < n-2 ; i ++) {
			for(int j = i+1 ; j < n-1 ; j ++) {
				for(int k = j+1 ; k < n ; k ++) {
					if((bs[i]|bs[j]|bs[k]).to_string() == "1111111110") {
						int m = s[i]+s[j]+s[k];
						if(m > o) o = m;
					} 
				}
			}
		}
		cout << "Case " << cs++ << ": " << o << endl;
	}
	return 0;
}