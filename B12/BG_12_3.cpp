#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
ll sum = 0;
ll ans = 0;
int c[100][100];
int x[100];
int used[100];
int cot[100];
int cheo1[100];
int cheo2[100];
int cnt = 0;

void Try(int i, ll dis)
{
	for (size_t j = 1; j <= n; j++)
	{
		if (!used[j])
		{
			x[i] = j;
			used[j] = 1;
			dis += c[x[i - 1]][x[i]];

			if (i == n)
			{
				dis += c[x[n]][1];
				ans = min(ans, sum);
			}
			else
			{
				Try(i + 1, dis);
			}

			used[j] = 0;
			dis -= c[x[i - 1]][x[i]];
		}
	}
}

int main()
{


	return 0;
}