#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
ll sum = 0;
int a[100][100];
int x[100];
int cot[100];
int cheo1[100];
int cheo2[100];
int cnt = 0;

void Try(int i, ll curSum);

int main()
{
	n = 8;

	for (size_t i = 1; i <= n; i++)
	{
		for (size_t j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}


	Try(1,0);
	cout << sum;

	return 0;
}

void Try(int i, ll curSum)
{
	for (size_t j = 1; j <= n; j++)
	{
		if (!cot[j] && !cheo1[i - j + n] && !cheo2[i + j - 1])
		{
			x[i] = j;


			cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 1;

			if (i == n)
			{
				++cnt;
				sum = max(sum, curSum);
			}
			else
			{
				Try(i + 1, curSum += a[i][j]);
			}

			curSum -= a[i][j];
			cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
		}
	}
}