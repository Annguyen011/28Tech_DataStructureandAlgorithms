#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<string>
#include<stack>
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
vector<int> tadj[1001];
vector<pair<int, int >> dsCanh;
bool visited[1001];
stack<int> st;

void Nhap()
{
	cin >> n >> m;

	for (size_t i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;

		adj[x].push_back(y);
		tadj[y].push_back(x);
	}

	memset(visited, false, sizeof(visited));
}

void DFS(int u)
{
	visited[u] = true;

	for (int v : adj[u])
	{
		if (!visited[v])
		{
			DFS(u);
		}
	}

	st.push(u);
}

void DFS1(int u)
{
	cout << u << " ";

	visited[u] = true;

	for (int v : tadj[u])
	{
		if (!visited[v])
		{
			DFS1(u);
		}
	}
}

void Kosaraju()
{
	for (size_t i = 1; i <= n; i++)
	{
		if (!visited[i])
		{
			DFS(i);
		}
	}

	memset(visited, false, sizeof(visited));

	while (!st.empty())
	{
		int top = st.top();
		st.pop();

		if (!visited[top])
		{
			++cnt;
			DFS1(top);
		}
	}

}

int main()
{
	

	return 0;
}