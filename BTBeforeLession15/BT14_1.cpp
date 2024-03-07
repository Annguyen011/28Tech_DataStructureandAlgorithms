#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

#define ll long long

int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];

int main()
{
	int tien[] = { 1000,500,200,100,50,20,10,5,2,1 };
	cin >> n;
	k = 0;
	while (n)
	{
		cnt += n / tien[k];
		n %= tien[k];
		k++;
	}

	cout << cnt;
	return 0;
}