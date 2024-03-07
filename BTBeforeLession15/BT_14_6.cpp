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

int main()
{
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a, a + n);

	cout << max({
		a[0] * a[1],
		a[n] * a[n - 1]
		});

	return 0;
}