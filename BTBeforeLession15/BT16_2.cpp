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

int main()
{
	vector<set<int>> vt;

	cin >> n >> k;

	for (size_t i = 0; i < k; i++)
	{
		int temp1, temp2;
		cin >> temp1 >> temp2;
		vt[temp1].insert(temp2);
		vt[temp2].insert(temp1);
	}

	for (size_t i = 0; i < vt.size(); i++)
	{
		for (int x : vt[i])
		{
			cout << x;
		}
	}

	return 0;
}