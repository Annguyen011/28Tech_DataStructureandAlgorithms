#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

// So diem cuc dai

int n;
int m;
int a[100][100];
int dx[] = { -1,-1 - 1,0,0,1,1,1 };
int dy[] = { -1,0,1,-1,1,-1,0,1 };

int Check(int i, int j)
{
	for (size_t k = 0; k < 8; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];

		if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && a[i][j] <= a[i1][j1])
		{
			return 0;
		}
	}
	return 1;
}

int main()
{

	return 0;
}