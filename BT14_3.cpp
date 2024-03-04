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

struct Jb
{
	int id, dl, profit;
};

int main()
{
	Jb a[1001];

	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		cin >> a[i].id >> a[i].dl >> a[i].profit;
	}

	// sort theo deadline

	priority_queue<int>pq;
	int curDay = a[0].dl;
	int idx = 0;

	while (curDay >= 1)
	{
		while (a[idx].dl >= curDay)
		{
			pq.push(a[idx].dl);
			idx++;
		}
		if (!pq.empty())
		{
			res += pq.top();
			pq.pop();
		}
		curDay--;
	}

	cout << res;

	return 0;
}