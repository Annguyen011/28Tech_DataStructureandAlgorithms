#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main()
{
	int a[1001][1001];
	int d[1001];
	int n;
	int m;

	for (size_t i = 0; i < n; i++)
	{

		for (size_t j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			if (d[a[i][j]] == i)
			{
				d[a[i][j]] = i + 1;
			}
		}
	}

	for (int i = 0; i < 1001; i++)
	{
		if (d[i] == n - 1)
		{
			cout << i << " ";
		}
	}

	return 0;
}