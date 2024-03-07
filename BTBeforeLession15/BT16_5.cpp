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

int main()
{
	cin >> n >> m;

	for (size_t i = 0; i < m; i++)
	{
		int temp1, int temp2;
		adj[temp1].push_back(temp2);
	}

	for (size_t i = 01; i <= n; i++)
	{
		cout << i << ": ";

		for (int v : adj[i])
		{
			cout << i << " ";
		}
	}

	return 0;
}