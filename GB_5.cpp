#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int a[1001];
int ok = 0;

void Sinh();
void KhoiTao();

int main()
{
	cin >> n;
	KhoiTao();
	Sinh();

	for (size_t i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}

	return 0;
}

void Sinh()
{
	int i = n - 1;
	while (i >= 1 && a[i] > a[i + 1])
	{
		--i;
	}

	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		for (size_t j = n; j > 0; j--)
		{
			if (a[i] < a[j])
			{
				swap(a[i], a[j]);
				break;
			}
		}

		reverse(a + i + 1, a + n + 1);
	}
}

void KhoiTao()
{
	for (size_t i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
}
