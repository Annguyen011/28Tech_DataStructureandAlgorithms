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
int used[1001];
int a[1001];

void Ql(int i, int bd, ll sum)
{
	if (ok) return;

	for (size_t j = bd; j <= n; j++)
	{
		if (!used[j] && abs(x[i - 1] - j) > 1)
		{
			x[i] = j;

			used[j] = 1;
			if (i == n)
			{

			}
			else
			{
				Ql(i + 1);
			}

			used[j] = 0;
		}
	}
}