#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	// if there is more than 1 letter occurring odd numbers of times
	// then there is no solution
	// else put the letter which is occuring odd number of times in the middle
	// and divide the rest of the characters in the string

	string s;
	cin >> s;
	int n = s.size();
	//store count of all the characters
	map<char, int> m;
	for (int i = 0; i < n; ++i) {
		m[s[i]]++;
	}
	int oddCount = 0;
	char ch = '?';
	int ct = 0;
	for (auto &it : m) {
		if (it.second % 2 == 1) {
			oddCount++;
			ch = it.first;
			ct = it.second;
		}
	}
	if (oddCount > 1)
		cout << "NO SOLUTION";
	else {
		string ans = "";

		// left side
		for (auto &it : m) {
			int count = it.second;
			if (it.first == ch) continue;
			for (int i = 0; i < count / 2; ++i) {
				ans.push_back(it.first);
			}
		}
		// mid if exist
		if (oddCount == 1) {
			for (int i = 0; i < ct; ++i) {
				ans.push_back(ch);
			}
		}
		//right side
		for (auto it = m.rbegin(); it != m.rend(); it++) {
			int count = (*it).second;
			if ((*it).first == ch) continue;
			for (int i = 0; i < count / 2; ++i) {
				ans.push_back((*it).first);
			}
		}
		cout << ans;
	}
	return 0;
}