#include<iostream>

using namespace std;

int Search(int a[], int n, int x)
{
	int l = 0;
	int r = n - 1;
	int m;

	while (a[l] != a[r] && x >= a[l] && x <= a[r])
	{
		m = l + ((r - l) * (x - a[l]) / (a[r] - a[l]));

		if (a[m] < x)
		{
			l = m + 1;
		}
		else if (a[m] > x)
		{
			r = m - 1;
		}
		else
		{
			return m;
		}
	}

	if (a[l] == x)
	{
		return l;
	}
}

int main()
{
	int n = 10;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };



	cout << Search(a, n, 4);
}