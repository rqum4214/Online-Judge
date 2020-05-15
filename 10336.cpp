#include <bits/stdc++.h>
using namespace std;

struct d{
	char c;
	int n;
	bool operator <(const d &b) const {
		if(n == b.n) return c < b.c;
		return n > b.n;
	}
};

char m[1000][1000] = {};

void sc(char t, int a, int b) {
	m[a][b] = '0';
	if(m[a-1][b] == t) sc(t, a-1, b);
	if(m[a+1][b] == t) sc(t, a+1, b);
	if(m[a][b-1] == t) sc(t, a, b-1);
	if(m[a][b+1] == t) sc(t, a, b+1);
}

int main() {
	int n, wd = 1;
	cin >> n;
	while(n --) {
		int h, w;
		cin >> h >> w;
		for(int i = 1 ; i <= h ; i ++) {
			for(int j = 1 ; j <= w ; j ++) {
				cin >> m[i][j];
			}
		}
		d a[26];
		for(int i = 0 ; i < 26 ; i ++) {
			a[i].c = 'a'+i;
			a[i].n = 0;
		}
		for(int i = 1 ; i <= h ; i ++) {
			for(int j = 1 ; j <= w ; j ++) {
				if(m[i][j] >= 'a' && m[i][j] <= 'z') {
					a[m[i][j]-'a'].n ++;
					sc(m[i][j], i, j);
				}
			}
		}
		sort(a, a+26);
		cout << "World #" << wd++ << endl;
		for(int i = 0 ; i < 26 ; i ++) {
			if(a[i].n) cout << a[i].c << ": " << a[i].n << endl;
		}
	}
	return 0;
}