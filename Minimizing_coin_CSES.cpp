//Minimizing_coin_CSES.cpp
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(int argc, char const *argv[])
{
	ll n, x;
	cin>>n>>x;
	vector<ll> dp(x+1, INT_MAX);
	//base case
	dp[0] = 0;
	vector<ll>coin(n);
	for (int i = 0; i <= n-1; ++i)
	{
		cin>>coin[i];
	}
	for (int i = 1; i <= x; ++i)
	{
		for (int j = 0; j <= n-1; ++j)
		{
			if(coin[j]>i) continue;
			dp[i] = min(dp[i] , 1 + dp[i-coin[j]]);
		}
	}
	if(dp[x] == INT_MAX) cout<<-1;
	else cout<<dp[x];
	
	return 0;
}