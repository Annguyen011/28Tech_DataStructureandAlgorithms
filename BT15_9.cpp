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
	int w[1001];
	int v[1001];
	int V;

	cin >> n >> V;

	for (size_t i = 1; i <= n; i++)
	{
		cin >> w[i];
	}

	for (size_t i = 1; i <= n; i++)
	{
		cin >> v[i];
	}

	int F[1001][1001];
	F[0][0] = 0;

	for (size_t i = 01; i <= n; i++)
	{
		for (size_t j = 1; j <= V; j++)
		{
			if (j >= w[i])
			{
				F[i][j] = max(v[i] + F[i - 1][j - w[i]], F[i - 1][j]);
			}
			else
			{

			}
		}
	}

	return 0;
}