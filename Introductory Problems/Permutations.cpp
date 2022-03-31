#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll 		long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	// the basic idea is to place numbers alternatively
	// 1 _ 2 _ 3 _ 4 _ 5 _ 6 _
	// and the again put the remaining numbers alternatively
	// 1 7 2 8 3 8 4 9 5 10 6 11
	// only exception is 4 and for 2 and 3 no solution
	int n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
	}
	else if (n == 4) {
		cout << "2 4 1 3";
	}
	else {
		vector<int> a(n);
		int count = 1;
		for (int i = 0; i < n; i += 2) {
			a[i] = count;
			count++;
		}
		for (int i = 1; i < n; i += 2) {
			a[i] = count;
			count++;
		}
		for (int i = 0; i < n; i++) {
			cout << a[i] << " ";
		}
	}
	return 0;
}
