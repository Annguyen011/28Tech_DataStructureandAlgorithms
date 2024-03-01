#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

#define ll long long

int n;	
int a[1001];

void Try(int i)
{
	for (size_t j = 0; j <= 1; j++)
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