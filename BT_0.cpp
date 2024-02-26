#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int x[100];
int ok = 1;

void Sinh();
void KhoiTao();

int main()
{
	cin >> n;
	int m = n;
	n /= 2;
	ok = 1;
	if (m % 2 == 0)
	{
		while (ok)
		{
			for (size_t i = 1; i <= n; i++)
			{
				cout << x[i];
			}

			for (size_t i = n; i >= 1; i--)
			{
				cout << x[i];
			}
			cout << endl;
			Sinh();
		}
	}
	else
	{
		for (size_t u = 0; u <= 1; u++)
		{
			for (size_t i = 1; i <= n; i++)
			{
				cout << x[i];
			}
			cout << u;
			for (size_t i = n; i >= 1; i--)
			{
				cout << x[i];
			}

			cout << endl;
		}
		Sinh();

	}


	return 0;
}

void Sinh()
{
	int i = n;

	while (i >= 1 && x[i])
	{
		x[i] = 0;
		--i;
	}
	if (i == 0)
	{
		ok = 0;
	}
	else
	{
		x[i] = 1;
	}
}

void KhoiTao()
{

}