#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

int main()
{
	c_p_c();

	// (sum of 1 to n numbers - sum of the numbers given) will give us the missing number
	int n;
	cin >> n;
 
	int sum = 0;
	int temp;
	for (int i = 1; i < n; ++i)
	{
		cin >> temp;
		sum += temp;
	}
 
	int total = (n * (n + 1)) / 2;
 
	cout << total - sum;

	return 0;
}