#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<algorithm>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;
int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];
int d[1001];
int f[1001][1001];
vector<int> ke[1001];
vector<pair<int, int >> dsCanh;
bool visited[1001];

void DFS1(int u)
{
	cout << u;

	visited[u] = true;

	for (int v : ke[u])
	{
		if (!visited[v])
		{
			DFS1(v);
		}
	}
}

void DFS2(int u)
{
	cout << u;

	visited[u] = true;

	for (size_t i = 01; i <= n; i++)
	{
		if (f[u][i] == 1)
		{
			if (visited[i])
			{
				continue;
			}

			DFS2(i);
		}
	}
}

void DFS3(int u)
{
	cout << u;

	visited[u] = true;

	for (auto it : dsCanh)
	{
		if (it.first == u)
		{
			if (!visited[it.second])
			{
				DFS3(it.second);
			}
		}
		
		if (it.second == u)
		{
			if (!visited[it.first])
			{
				DFS3(it.first);
			}
		}
	}
}

int main()
{
	// DFS
	// BFS

	// Tu tuong cua DFS la moi lan di vao dinh do ta danh dau la da duoc tham roi 
	// xet cac dinh lien ke voi no va goi lai de quy

	// Tu tuong cua BFS la

	return 0;
}