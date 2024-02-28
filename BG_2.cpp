#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int k;	
int a[1001];

void Try(int i)
{
	for (size_t j = a[i-1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if (i == n)
		{
			// In 
		}
		else
		{
			Try(i + 1);
		}
	}
}

int main()
{


	return 0;
}	