#include<iostream>
#include<vector>
#include<queue>
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
	int n, s, m;
	int song = s * m;

	int soNgayDiCho = s - (s / 7);
	int tongDiCho = soNgayDiCho * n;

	if (tongDiCho < song)
	{
		cout << "Die";
	}
	else
	{
		cout << "Alive";
	}

	return 0;
}