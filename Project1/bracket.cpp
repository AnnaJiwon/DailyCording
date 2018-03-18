#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	string s;
	cin >> s;
	vector<int> num;
	vector<int> opt;

	opt.push_back(1); // first number always '+'
	int cur = 0;
	bool minus;

	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '+' || s[i] == '-') {
			if (s[i] == '+')
				opt.push_back(1);
			else 
				opt.push_back(-1);
		
			num.push_back(cur);
			cur = 0;
		}
		else { // if s[i] is not operator, push number.
			cur = cur * 10 + (s[i] - '0');
		}
	}
	num.push_back(cur);

	int ans = 0;
	minus = false;

	for (int i = 0; i < num.size(); i++) {
		if (opt[i] == -1)
			minus = true;
		if (minus)
			ans -= num[i];
		else
			ans += num[i];
	}

	cout << ans << '\n';
	return 0;
}

