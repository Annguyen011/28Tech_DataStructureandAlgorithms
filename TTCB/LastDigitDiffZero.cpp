#include<iostream>
#include<vector>
#include<set>
#include<queue>
#include<string>
#include<stack>
#include<algorithm>

using namespace std;

#define ll long long

ll mod = 1e9 + 7;
int n;
int m;
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
vector<int> tadj[1001];
vector<pair<int, int >> dsCanh;
bool visited[1001];
stack<int> st;

int lastDigitDiffZero(int n)
{
    long long res = 1;
    for (int i = 2; i <= n; i++)
    {
        res *= i;
        while (res % 10 == 0) res /= 10;
        res = res % 100;
    }
    while (res % 10 == 0) res /= 10;
    return res % 10;
}