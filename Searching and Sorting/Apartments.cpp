#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll      long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	ll n, m, k;
	cin >> n >> m >> k;
	vector<ll> log(n);
	for (int i = 0; i < n; ++i)
		cin >> log[i];
	vector<ll> ghar(m);
	for (int i = 0; i < m; ++i)
		cin >> ghar[i];

	sort(log.begin(), log.end());
	sort(ghar.begin(), ghar.end());

	int lid = 0, gid = 0, ans = 0;
	while (lid != n && gid != m) {
		if (ghar[gid] - k <= log[lid] && ghar[gid] + k >= log[lid]) {
			ans++;
			gid++;
			lid++;
		}
		else if (ghar[gid] + k < log[lid])
			gid++;
		else if (log[lid] < ghar[gid] - k)
			lid++;
	}
	cout << ans;
	
	return 0;
}