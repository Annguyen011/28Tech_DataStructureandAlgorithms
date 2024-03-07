#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];

void Ql(int i, int bd)
{
	for (size_t j = bd; j <= n; j++)
	{
		if (a[j] > x[i - 1])
		{
			x[i] = a[j];

			if (i >= 2)
			{
				// In ra
			}
			else
			{
				Ql(i + 1, j + 1);
			}
		}
	}
}

int main()
{
	

	return 0;
}