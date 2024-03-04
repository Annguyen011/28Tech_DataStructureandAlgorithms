#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int ok;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];

void Ql(int i, int bd, ll sum)
{
	if (ok) return;

	for (size_t j = bd; j <= n; j++)
	{
		if (sum + a[j] <= s)
		{
			x[i] = a[j];
			if (sum + a[j] == s)
			{
				ok = 1;
			}
			else
			{
				Ql(i + 1, j + 1, sum + a[j]);
			}
		}

	}
}