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
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (size_t i = 0; i < n; i++)
	{
		d[a[i]] = 1;

		for (size_t j = 0; j < i; j++)
		{
			if (a[i] > a[j])
			{
				d[a[i]] = max(d[a[j]] + 1, d[a[i]]);
			}
		}
	}

	return 0;
}