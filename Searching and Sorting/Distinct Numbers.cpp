#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll      long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	int n;
	cin >> n;
	set<int> s;
	int x;
	for (int i = 0; i < n; ++i) {
		cin >> x;
		s.insert(x);
	}
	cout << s.size();

	return 0;
}
