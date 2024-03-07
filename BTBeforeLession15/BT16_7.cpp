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

void Nhap()
{
	cin >> n >> m;
	for (size_t i = 0; i < m; i++)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		adj[temp1].push_back(temp2);
		adj[temp2].push_back(temp1);
	}
}

void DFS(int u)
{
	// Xu ly 
	visited[u] = true;

	for (int x : adj[u])
	{
		if (!visited[x])
		{
			DFS(x);
		}
	}
}

void BFS(int u)
{
	queue<int> q;   
	q.push(u);
	visited[u] = true;

	// 3 4 5 7 6   
	// 1 2
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		cout << x << " ";

		for (int y : adj[x])
		{
			if (!visited[y])
			{
				q.push(y);
				visited[y] = true;
			}
		}
	}
}

int main()
{


	return 0;
}