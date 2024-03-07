#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];

int main()
{
	vector<int> v;
	cin >> n >> k;
	ll ans = 0;
	for (size_t i = 0; i < n; i++)
	{
		int l, t;
		cin >> l >> t;

		if (t == 0)
		{
			ans += l;
		}
		else
		{
			v.push_back(l);
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		if (i < k)
		{
			ans += v[i];
		}
		else
		{
			ans -= v[i];
		}
	}

	return 0;
}