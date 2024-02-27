#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
bool used[1001];
int a[1001];
int x[1001];

void Ql(int i)
{
	for (size_t j = 1; j <= n; j++)
	{
		if (!used[j])
		{
			x[i] = j;
			used[j] = true;
			if (i == n)
			{
				// Xu ly
			}
			else
			{
				Ql(i + 1);
			}
			used[j] = false;

		}
	}
}

int main()
{
	cin >> n;

	return 0;
}