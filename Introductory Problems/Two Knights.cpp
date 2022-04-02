#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}


int main()
{
	c_p_c();

	// n^2 * n^2 - 1 (ways two knights can be placed)
	// subtract
	// first layer
	// 4 corners * 2 attack positions
	// 8 (adjacent to corners) * 3 attack positions
	// and so on
	// (n-4) * 4 attack positions * 4 sides
	// second layer
	// 4 corners * 4 attack positions
	// (n-4) (next to corners) * 6 attack positions * 4 sides
	// insides
	// now all we are left is the insides
	// where in each position of knight, 8 attack positions are possible
	// (n-4)^2 * 8 attack positions

	// everything divided by 2 to get the final answer

	ll x;
	cin >> x;
	for (ll n = 1; n <= x; ++n)
	{
		ll ans = (n * n * (n * n - 1) - 8 - 24 - (n - 4) * 16 - 16 - 24 * (n - 4) - 8 * (n - 4) * (n - 4)) / 2;
		cout << ans << nline;
	}

	return 0;
}