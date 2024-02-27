#include<iostream>
#include<vector>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int a[100];
int x[100];
bool used[1001];
int ok;

void Ql(int i)
{
	for (int j = 1; i <= n; j++)
	{
		if (!used[j])
		{
			x[i] = j;

			if (i == n)
			{
				for (int k = 1; k <= n; k++)
				{
					cout << x[k];
				}
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
	int m;
	cin >> m;

	set<int> st;

	for (size_t i = 1; i <= m; i++)
	{
		int x;
		cin >> x;
		st.insert(x);
	}

	n = 0;

	for (int x : st)
	{
		n++;
		a[n] = x;
	}

	return 0;
}