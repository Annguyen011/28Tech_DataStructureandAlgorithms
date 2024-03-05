#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];
int d[1001];
int f[1001];

int main()
{
	f[0] = 1;

	cin >> n;

	for (size_t i = 1; i < 1001; i++)
	{
		f[i] = f[i - 1] * i;
	}

	cout << f[n];

	return 0;
}