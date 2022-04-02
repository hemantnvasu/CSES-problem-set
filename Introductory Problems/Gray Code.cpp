#include <bits/stdc++.h>
using namespace std;

#define nline	"\n"
#define ll     	long long int

void c_p_c() { ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);}

vector<string> generateNbitGreyCode(int n) {
	//base case
	if (n == 1) {
		vector<string> base = {"0", "1"};
		return base;
	}
	vector<string> ans = generateNbitGreyCode(n - 1);
	vector<string> res;
	for (int i = 0; i < ans.size(); i++) {
		res.push_back('0' + ans[i]);
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		res.push_back('1' + ans[i]);
	}
	return res;
}

int main()
{
	c_p_c();

	//recursive solution
	int n;
	cin >> n;
	vector<string> ans = generateNbitGreyCode(n);
	for (auto &it : ans) {
		cout << it << nline;
	}

	return 0;
}