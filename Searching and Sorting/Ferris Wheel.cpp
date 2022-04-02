#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll      long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	// this problem is basically a slight modification in binary search
	// if x is 10 and the first child's weight is 7
	// then the second child to sit with first child should have weight 1 or 2 or 3
	// or else the first child has to sit alone

	int n, x;
	cin >> n >> x;
	vector<int> weight(n);
	for (int i = 0; i < n; ++i)
		cin >> weight[i];

	sort(weight.begin(), weight.end());

	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int a = weight[i];
		if (a > x) continue;
		int b = x - a;
		int lo = i + 1, hi = n - 1;

		int c = -1;
		while (lo <= hi) {
			int mid = (lo + hi) / 2;
			if (weight[mid] <= b) {
				c = mid;
				lo = mid + 1;
			}
			else
				hi = mid - 1;
		}
		if (c != -1)
			weight[c] = x + 1;
		ans++;
	}
	cout << ans;

	return 0;
}