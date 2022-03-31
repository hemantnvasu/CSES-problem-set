#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll   	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	int tt;
	cin >> tt;
	while (tt--) {
		ll x, y;
		cin >> x >> y;
		if (x == 1 && y == 1) {
			cout << 1 << endl;
		}
		else {
			//find total max number in previous grid
			ll mx = max(x, y);
			ll num = (mx - 1) * (mx - 1);//number of elements in the previous grid

			if (x > y)
			{
				if (x % 2 == 0) //count in reverse
					cout << (mx * mx) - y + 1 << nline;
				else
					cout << num + y << nline ;
			}
			else
			{
				if (y % 2 == 0)
					cout << num + x << nline;
				else
					cout << (mx * mx) - x + 1 << nline;
			}
		}
	}

	return 0;
}