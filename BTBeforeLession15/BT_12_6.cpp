#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int k;
int s;
int a[1001];

void QQ(int i, int j);

int main()
{


	return 0;
}

void Ql(int i, int bd, ll sum)
{
	// Quay lui for => gia tri
	// Khi su ly i == k

	for (size_t j = bd; j <= n; j++)
	{
		a[i] = j;

		if (sum == k)
		{
			//Xu ly
		}
		else
		{
			Ql(i + 1, j + 1, sum + j);
		}
	}
}