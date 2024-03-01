#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int main()
{
	int a[1001][1001];
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
		if (i % 2 != 0)
		{
			reverse(a[i], a[i] + n);
		}

		for (size_t j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}

	return 0;
}