#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n;
int k;
int a[1001];
int ok = 0;

void KhoiTao();
void Sinh();

int main()
{
	vector<vector<int>> vt;

	cin >> n;
	cin >> k;
	KhoiTao();
	while (!ok)
	{
		vector<int> tmp;
		for (size_t i = 1; i <= k; i++)
		{
			tmp.push_back(a[i]);
		}
		vt.push_back(tmp);
		Sinh();
	}

	reverse(vt.begin(), vt.end());

	for (auto x : vt)
	{
		for (int res : x)
		{
			cout << res << " ";
		}
		cout << endl;
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