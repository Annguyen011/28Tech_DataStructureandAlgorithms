#include<iostream>
#include<vector>
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

void Ql(int i, int bd, ll sum)
{
	for (int j = bd; j <= n; j++)
	{
		if (sum + j <= s)
		{
			x[i] = j;

			if (sum + j == s)
			{
				//xu ly
			}
			else
			{
				Ql(i + 1, j + 1, sum + j);
			}
		}
	}
}