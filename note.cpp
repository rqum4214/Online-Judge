#include <bits/stdc++.h>
#include <cstdlib>
	abs(a)
#include <algorithm>
	min(a, b)
	max(a, b)
	find(begin, end, element)
#include <string>
	to_string(a)
	getline(cin, s)
	size_t f = a.find(s); // not find f == string::npos
	string(num, char)
#include <iomanip>
	cout << setw(num) << a;
	cout << fixed << setprecision(num) << float;
#include <map>
	map<string, int> m;
	m[s] = num;
	map<string, int>::iterator it;
	for(it = m.begin() ; it != m.end() ; it ++)
		cout << it->first << " " << it->second << endl;
#include <cctype>
	toupper(a);
	tolower(a);
#include <iostream>
	cin.get(char)
	cin.getline(char*, num)
#include <cmath>
	pow(double, double)
	int pow(int a, int b) {
		int o = 1;
		while(b) {
			if(b & 1) o *= a;
			b >>= 1;
			a *= a;
		}
		return o;
	}
	sqrt(double)
	pi = acos(-1);
#include <sstream>
	stringstream ss;
	ss.str("");
	ss.clear();
///////////////////////////////////////////
	int gcd(int a, int b) {
		if(b == 0) return a;
		while((a%=b) && (b%=a)) ;
		return a+b;
	}
