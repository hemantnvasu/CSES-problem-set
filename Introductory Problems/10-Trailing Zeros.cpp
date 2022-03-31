#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll 		long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	// refer to this article for better understanding of how to approach this problem
	// https://www.geeksforgeeks.org/count-trailing-zeroes-factorial-number/

	ll n;
	cin >> n;
	ll i = 5;
	ll count = 0;
	while ((n / i) >= 1)
	{
		count += n / i;
		i = i * 5;
	}
	cout << count;

	return 0;
}