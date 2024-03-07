#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<string>
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
vector<int> adj[1001];
vector<pair<int, int >> dsCanh;
bool visited[1001];

//void Xuly(int i, string s)
//{
//	stringstream ss(s);
//	string temp;
//
//	while (ss >> temp)
//	{
//		int j = stoi(temp);
//
//		if (j > i)
//		{
//			cout << i << " " << j << endl;
//		}
//	}
//}

int main()
{
	cin >> n;

	for (size_t i = 0; i < n; i++)
	{
		string s;
		getline(cin, s);

		//Xuly(i, s);


	}
	return 0;
}