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
		for (size_t j = 0; j < m; j++)
		{
			if (i == 0 || j == 0 || i == n || j == m)
			{
				cout << a[i][j];
			}
			else
			{
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}