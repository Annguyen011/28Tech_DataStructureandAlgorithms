#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;
int n;
int ok;
int cnt;
int k;
int res = INT_MAX;
int s;
int x[1001];
int a[1001];
int d[1001];
int f[1001][1001];

int main()
{
	// Do thi co don do thi va da do thi
	// Nam do thi lien thong
	// Lien thong manh va lien thong yeu 
	// Cac khai niem co ban tren do thi

	// G la do thi
	// V
	// E

	// Su dung ma tran ke de bieu dien
	// Luon doi xung qua duong cheo chinh
	// Ma tran trong so
	// Hien thi thay vi 1 va 0 thi dung cac trong so de bieu dien
	// Duyet theo danh sach canh

	cin >> n >> k;

	int t = k;

	while (t--)
	{
		int q, p;
		cin >> q >> p;
		f[q][p] = 1;
	}

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < k; j++)
		{
			cout << f[i][j];
		}
	}

	return 0;
}