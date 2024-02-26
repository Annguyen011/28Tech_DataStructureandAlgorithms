#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int cnt;
int a[1001];
int ok = 0;

void Sinh();
void KhoiTao();

int main()
{
	cin >> n;
	KhoiTao();
	while (!ok)
	{
		for (size_t i = 1; i <=  cnt; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
		Sinh();
	}

	return 0;
}

void Sinh()
{
	// Bat dau tu so hang cuoi cung
	int i = cnt;

	while (i >= 1 && a[i] == 1)
	{
		--i;
	}

	if (i == 0)
	{
		ok = 1;
	}
	else
	{
		a[i]--;
		//So luong bu vao
		int d = cnt - i + 1;

		cnt = i;
		//So lan them lai phan tu bang gia tri a[i]
		int q = d / a[i];
		//Phan du neu co
		int r = d % a[i];

		for (int j = 1; j <= q; j++)
		{
			cnt++;
			a[j + i] = a[i];
		}
		
		if (r != 0)
		{
			++cnt;
			a[cnt] = r;
		}
	}
}

void KhoiTao()
{
	cnt = 1;
	a[1] = n;
}
