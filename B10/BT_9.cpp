#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int k;
int a[1001];
int ok;

void KhoiTao();
void Sinh();

int main()
{
	cin >> k;

	vector<string> v;

	for (n = 1; v.size() < k; n++)
	{
		KhoiTao();

		while (ok)
		{
			string s = "";
			for (size_t i = 1; i <= n; i++)
			{
				s = s + to_string(a[i]);
			}

			for (size_t i = n; i >= 1; i--)
			{
				s = s + to_string(a[i]);
			}
			v.push_back(s);
			Sinh();
		}
	}

	return 0;
}

void KhoiTao()
{
	for (size_t i = 1; i <= n; i++)
	{
		a[i] = 1;
	}
}

void Sinh()
{
	int i = n;
	while (i >= 1 && a[i])
	{
		a[i] = 0;
		i--;
	}

	if (i == 0)
	{
		ok = 0;
	}
	else
	{
		a[i] = 1;
	}
}