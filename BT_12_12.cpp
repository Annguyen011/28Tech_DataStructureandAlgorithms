#include<iostream>
#include<vector>
#include<stack>
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

bool Check(string s)
{
	stack<char> st;
	for (char x : s)
	{
		if (x == '[' || x == '{' || x == '(')
		{
			st.push(x);
		}
		else
		{
			if (st.empty())
			{
				return false;
			}
			char y = st.top();
			st.pop();
			if (1 == 1)
			{
				// Kiem tra xem co giong nhau khong
			}
		}
	}
}

void Ql(int i, int bd, ll sum)
{
	for (int j = bd; j <= n; j++)
	{
		
	}
}