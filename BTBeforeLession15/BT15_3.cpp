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
int d[1001];
int f[1001];


int main()
{
	f[0] = 1;
	f[1] = 1;

	cin >> n >> k;

	for (size_t i = 1; i <= n; i++)
	{

		for (size_t j = 1; j <= k; j++)
		{
			if (i - j > 0)
			{
				f[i] += f[i - j];
			}
		}
	}


	return 0;
}