#include<iostream>
#include<vector>
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

int Rev(int n)
{
	int s = 0;
	while (n)
	{
		int r = n % 10;
		s = s * 10 + r;
		n /= 10;
	}
}

ll PowMod(int a, int n)
{
	if (n == 0)
	{
		return 1;
	}

	ll x = PowMod(a, n / 2);

	if (n % 2 == 0)
	{
		return x * x % mod;
	}
	else
	{
		return ((x * x % mod) * (a % mod)) % mod;
	}
}

int main()
{


	return 0;
}