#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;
int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];
int d[1001];
int f[1001][1001];

int main()
{
	cin >> n >> s;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (size_t i = 1; i <= n; i++)
	{
		f[i][0] = 1;
	}

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; i <= n; i++)
		{
			if (j >= a[i])
			{
				f[i][j] = f[i - 1][j - a[i]] + f[i - 1][j];
			}
			else
			{
				f[i][j] = f[i - 1][j];
			}
			f[i][j] %= mod;
		}
	}

	return 0;
}