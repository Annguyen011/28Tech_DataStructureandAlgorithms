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

void DFS(int u)
{
	cout << u << " ";

	visited[u] = true;

	for (int i : adj[u])
	{
		if (!visited[i])
		{
			DFS(i);
		}
	}
}

int main()
{
	cin >> n >> m >> k;

	for (size_t i = 0; i < m; i++)
	{
		int temp1, temp2;
		adj[temp1].push_back(temp2);
	}

	DFS(1);

	return 0;
}