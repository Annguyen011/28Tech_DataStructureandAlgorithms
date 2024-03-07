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
	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i];
		d[a[i]]++;
	}

	res += d[4];

	int res31 = min(d[3], d[1]);
	res += res31;
	int res22 = d[2] / 2;
	res += res22;
	int res211 = min(d[2] - res22, d[1] - res31);
	res += d[3] - res31;
	int res1111 = d[1] / 4;
	res += res1111;

	return 0;
}