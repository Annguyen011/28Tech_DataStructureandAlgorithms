#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;
int n;
int m;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];
int d[1001];
int f[1001][1001];
vector<int> adj[1001];
vector<pair<int, int >> dsCanh;
bool visited[1001];

bool DFS(int u)
{
	visited[u] = true;

	for (int v : adj[u])
	{
		if (!visited[v])
		{
			a[v] = u;
			return DFS(v);
		}
		else if (v != a[u])
		{
			return true;
		}
	}
	return false;
}

int main()
{


	return 0;
}