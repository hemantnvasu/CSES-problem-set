#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	string s;
	cin >> s;
	int n = s.size();
	int ans = INT_MIN;
	int i = 0;
	while (i < n) {
		int count = 0;
		char c = s[i];
		while (i < n && c == s[i]) {
			i++;
			count++;
		}
		ans = max(ans, count);
	}
	cout << ans;

	return 0;
}