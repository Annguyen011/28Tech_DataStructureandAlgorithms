#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int x[100];
int cot[100];
int cheo1[100];
int cheo2[100];
int cnt = 0;

void Try(int i);

int main()
{
	cin >> n;
	Try(1);
	cout << cnt;

	return 0;
}

void Try(int i)
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
			}
			else
			{
				Try(i + 1);
			}

			cot[j] = cheo1[i - j + n] = cheo2[i + j - 1] = 0;
		}
	}
}