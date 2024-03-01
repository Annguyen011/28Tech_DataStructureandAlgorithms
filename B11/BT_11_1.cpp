#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int k;
int a[1001];
int used[1001];

void XyLy()
{

}

void Try(int i)
{
	for (size_t j = 1; j <= n; j++)
	{
		a[i] = j;
		used[j] = 1;
		if (i == n)
		{
			for (int k = 1; k <= n; k++)
			{
				cout << a[k];
			}
			cout << endl;
		}
		else
		{
			Try(i + 1);
		}
	}
}

int main()
{
	cin >> n >> k;
	Try(1);

	return 0;
}