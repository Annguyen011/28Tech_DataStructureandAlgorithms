#include<iostream>

using namespace std;

int n;
int k;
int a[1001];
int ok = 0;

void KhoiTao();
void Sinh();

int main()
{
	cin >> n;
	cin >>  k;
	KhoiTao();
	while (!ok)
	{
		for (size_t i = 1; i <= k; i++)
		{
			cout << a[i];
		}
		cout << endl;
		Sinh();
	}
}


// Tao ra cau hinh ban dau
void KhoiTao()
{
	for (size_t i = 1; i <= k; i++)
	{
		a[i] = i;
	}
}

// Sinh ra cau hinh tiep theo
void Sinh()
{
	int i = k;

	while (i >= 1 && a[i] == n - k + i)
	{
		a[i] = 0;
		--i;
	}

	if (i == 0)
	{
		// Danh dau day la cau hinh cuoi cung
		ok = 1;
	}
	else
	{
		a[i]++;

		for (size_t j = i + 1; j <= k; j++)
		{
			a[j] = a[j - 1] + 1;
		}
	}
}