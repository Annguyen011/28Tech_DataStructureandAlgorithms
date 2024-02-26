#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int m;
int a[1001][1001];
int dx[] = { -1,-1 - 1,0,0,1,1,1 };
int dy[] = { -1,0,1,-1,1,-1,0,1 };

void Loang(int i, int j)
{
	a[i][j] = 0;
	for (size_t k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i][j])
		{
			Loang(i1, j1);
		}
	}

}

int main()
{
	cin >> n >> m;
	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= m; j++)
		{
			cin >> a[i][j];
		}
	}

	int s1;
	int s2;
	int e1;
	int e2;

	cin >> e1 >> e2;
	cin >> s1 >> s2;

	cout << a[e1][e2];


	return 0;
}