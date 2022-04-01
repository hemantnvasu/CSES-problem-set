#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	string s;
	cin >> s;
	sort(s.begin(), s.end());
	vector<string> v;
	int ct = 0;
	do {
		ct++;
		v.push_back(s);
	} while (next_permutation(s.begin(), s.end()));
	cout << ct << nline;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << nline;
	}

	return 0;
}