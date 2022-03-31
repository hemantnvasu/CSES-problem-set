#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll 		long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	//if a[i-1] > a[i]
	//then the minimum operations required is a[i-1]-a[i]
	//which will make a[i] equal to a[i-1]
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	ll ans = 0;
	for (int i = 1; i < n; i++) {
		if (a[i - 1] > a[i]) {
			ans += (a[i - 1] - a[i]);
			a[i] = a[i - 1];
		}
	}
	cout << ans;
	return 0;
}