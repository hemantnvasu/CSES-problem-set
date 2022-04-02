#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}


void towerOfHanoi(int n, int src, int helper, int dest)
{
	if (n == 1) {
		cout << src << " " << dest << nline;
		return;
	}
	towerOfHanoi(n - 1, src, dest, helper);
	cout << src << " " << dest << nline;
	towerOfHanoi(n - 1, helper, src, dest);
}

int main()
{
	c_p_c();

	int n;
	cin >> n;
	cout << pow(2, n) - 1 << nline;
	towerOfHanoi(n, 1, 2, 3);

	return 0;
}