#include<iostream>

using namespace std;

int n;
int lenght = 100;
int a[1001];
int ok = 0;

void KhoiTao();
void Sinh();

int main()
{
	cin >> n;
	KhoiTao();
	while (!ok)
	{
		for (size_t i = 1; i <= n; i++)
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
	for (size_t i = 1; i <= n; i++)
	{
		a[i] = 0;
	}
}

// Sinh ra cau hinh tiep theo
void Sinh()
{
	int i = n;

	while (i >= 1 && a[i] == 1)
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
		a[i] = 1;
	}
}