#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	while(cin >> n) {
		stack<int> k;
		queue<int> q;
		priority_queue<int> p;
		bool ik = true, iq = true, ip = true;
		while(n -- ) {
			int a, b;
			cin >> a >> b;
			if(ik) {
				if(a == 1) k.push(b);
				else {
					if(!k.size() || b != k.top()) ik = false;
					else k.pop();
				}
			}
			if(iq) {
				if(a == 1) q.push(b);
				else {
					if(!q.size() || b != q.front()) iq = false;
					else q.pop();
				}
			}
			if(ip) {
				if(a == 1) p.push(b);
				else {
					if(!p.size() || b != p.top()) ip = false;
					else p.pop();
				}
			}
		}
		if(ik && !iq && !ip) cout << "stack\n";
		else if(!ik && iq && !ip) cout << "queue\n";
		else if(!ik && !iq && ip) cout << "priority queue\n";
		else if(!ik && !iq && !ip) cout << "impossible\n";
		else cout << "not sure\n";
	}
	return 0;
}