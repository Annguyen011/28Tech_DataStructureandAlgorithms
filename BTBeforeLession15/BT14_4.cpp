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
	for (size_t i = 0; i < n; i++)
	{
		cin >> x[i];
	}

	a[x[0]] = 1;

	for (size_t i = 1; i < n; i++)
	{
		a[x[i]] = 1;
		if (x[i] > x[i - 1])
		{
			a[x[i]] = a[x[i - 1]] + 1;
		}
	}

	reverse(x, x + n + 1);

	for (size_t i = 1; i < n; i++)
	{
		a[x[i]] = 1;
		if (x[i] > x[i - 1])
		{
			a[x[i]] = a[x[i - 1]] + 1;
		}
	}

	for (size_t i = 0; i < 1001; i++)
	{
		if (a[i] != 0)
		{
			cout << a[i] << " ";
		}
	}

	return 0;
}