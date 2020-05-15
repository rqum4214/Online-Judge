#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
	string s;
	while(getline(cin, s)) {
		string t = "";
		bool h = false;
		deque<string> d;
		for(int i = 0 ; i < s.size() ; i ++) {
			if(s[i] == '[' || s[i] == ']') {
				if(h) d.push_front(t);
				else d.push_back(t);
				h = (s[i] == '[')? true : false;
				t = "";
			}
			else t += s[i];
		}
		if(h) d.push_front(t);
		else d.push_back(t);
		for(int i = 0 ; i < d.size() ; i ++ ) cout << d[i];
		cout << endl;
	}
	return 0;
}