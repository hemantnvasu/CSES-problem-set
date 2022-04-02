#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}



int main()
{
	c_p_c();

	// bitmasking
	int n;
	cin >> n;
	ll totalSum = 0;
	vector<ll> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin >> v[i];
		totalSum += v[i];
	}

	ll minDiff = totalSum;
	// in mask of 1's there is only 1 subset
	// we can't consider the mask of all 1's because we have to divide this array into two subsets
	for (int mask = 0; mask < (1 << n) - 1; mask++)
	{
		ll subsetSum = 0;
		for (int i = 0; i < n; i++)
		{
			if (mask & (1 << i)) {
				subsetSum += v[i];
			}
		}
		minDiff = min(minDiff, abs((totalSum - subsetSum) - subsetSum));
	}
	cout << minDiff;



	return 0;
}