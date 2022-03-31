#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll 		long long int
#define mod		1000000007

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();
	
	// This problem can also be done by Modular Exponentiation 
        // which will compute the answer in O(log(n)) time complexity

	int n;
	cin >> n;

	ll ans = 2;
	for (int i = 1; i < n ; ++i)
	{
		ans = (2 * ans) % mod;
	}

	cout << ans;

	return 0;
}
