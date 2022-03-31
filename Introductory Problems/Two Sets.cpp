#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll 		long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	int n;
	cin >> n;

	// if total sum is odd then NO
	if (((n * (n + 1)) / 2) % 2) {
		cout << "NO";
	}
	else {
		vector<int> a;
		vector<int> b;
		ll sumA = 0, sumB = 0;
		//logic - if sumA<sumb add element in 'a' else add in 'b'
		for (int i = n; i >= 1; i--) {
			if (sumA < sumB) {
				a.push_back(i);
				sumA += i;
			}
			else {
				b.push_back(i);
				sumB += i;
			}
		}

		cout << "YES" << nline;
		cout << a.size() << nline;
		for (int i = 0; i < a.size(); ++i) {
			cout << a[i] << " ";
		}
		cout << nline;
		cout << b.size() << nline;
		for (int i = 0; i < b.size(); ++i) {
			cout << b[i] << " ";
		}

	}

	return 0;
}
