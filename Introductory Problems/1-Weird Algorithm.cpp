#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"

void c_p_c()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
}

int main()
{
	c_p_c();

	int n;
	cin >> n;
	cout << n << " ";
	while (n != 1)
	{
		if (n % 2 == 1)
			n = (n * 3) + 1;
		else
			n /= 2;
		cout << n << " ";
	}
	return 0;
}