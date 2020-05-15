#include <iostream>
#include <string>
using namespace std;

int main() {
	int x, y, px, py, sc[51][51] = {};
	char o;
	cin >> x >> y;
	while(cin >> px >> py >> o) {
		string s;
		getline(cin, s);
		getline(cin, s);
		bool off = false;
		for(int i = 0 ; i < s.size() ; i ++) {
			int nx = px, ny = py;
			switch(s[i]) {
				case 'L':
					switch(o) {
						case 'N': 
							o = 'W';
							break;
						case 'S':
							o = 'E';
							break;
						case 'E':
							o = 'N';
							break;
						case 'W':
							o = 'S';
							break;
					}
					break;
				case 'R':
					switch(o) {
						case 'N':
							o = 'E';
							break;
						case 'S':
							o = 'W';
							break;
						case 'E':
							o = 'S';
							break;
						case 'W':
							o = 'N';
							break;
					}
					break;
				case 'F':
					switch(o) {
						case 'N':
							ny += 1;
							break;
						case 'S':
							ny -= 1;
							break;
						case 'E':
							nx += 1;
							break;
						case 'W':
							nx -= 1;
							break;
					}
					break;
			}
			if(nx < 0 || nx > x || ny < 0 || ny > y) {
				if(sc[px][py]) continue;
				else {
					off = true;
					sc[px][py] = 1;
					break;
				}
			}
			else {
				px = nx;
				py = ny;
			}
		}
		cout << px << " " << py << " " << o << ((off)? " LOST\n" : "\n");
	}
	return 0;
}