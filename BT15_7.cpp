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

int main()
{
	ll f[1001][1001];
	string s1, s2;
	cin >> s1 >> s2;

	n = s1.length();
	int m = s2.length();

	f[0][0] = 0;

	for (size_t i = 1; i < n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			if (s1[i] == s2[j])
			{
				f[i][j] = f[i - 1][j - 1] + 1;
			}
			else
			{
				f[i][j] = max(f[i - 1][j], f[i][j - 1]);
			}
		}
	}

	return 0;
}