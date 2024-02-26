#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int m;
int res;
int cnt = 0;
int a[1001][1001];


int dx[] = {-1,0,0,1};
int dy[] = { 0,-1,1,0 };

void Loang(int i, int j)
{
	a[i][j] = 0;

	for (size_t k = 0; i < 4; i++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if (i1 <= n && j1 <= m && i1 >= 1 && j1 >= 1 && a[i1][j1])
		{
			Loang(i1, j1);
		}
	}
}

int main()
{
	

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
			if(a[i][j])
			{
				cnt = 0;
				Loang(i, j);
				res = max(res, cnt);
			}
		}
	}

	

	return 0;
}