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

int main()
{
	cin >> n;

	while (n--)
	{
		cin >> k;
		s += k % 10007;
	}
	cout << s;
	return 0;
}