
#include <iostream>
using namespace std;
int BinarySearch(int n, int a[], int x)
{
	int m;
	int l = 0;
	int r = n - 1;

	while (l <= r)
	{
		m = (l + r) / 2;
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
	return -1;
}


int main()
{
	int n = 10;
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };



	cout << BinarySearch(n, a, 10);
}
