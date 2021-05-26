	#include <bits/stdc++.h>
	#include <cstdio>
	#include <cstring>
	#include <cmath>
	#include <cstring>
	#include <chrono>
	#include <complex>
	#define endl "\n"
	#define ll long long int
	#define vi vector<int>
	#define vll vector<ll>
	#define vvi vector < vi >
	#define pii pair<int,int>
	#define pll pair<long long, long long>
	#define mod 1000000007
	#define inf 1000000000000000001;
	#define all(c) c.begin(),c.end()
	#define mp(x,y) make_pair(x,y)
	#define mem(a,val) memset(a,val,sizeof(a))
	#define eb emplace_back
	#define f first
	#define s second
	
	using namespace std;
	int main()
	{
			ll n,x;
			cin>>n>>x;
			vector<int>prices(n+1);
			vector<int>pages(n+1);
			for (int i = 1; i <= n; ++i){
				cin>>prices[i];
			}
			for (int i = 1; i <= n; ++i)
			{
				cin>>pages[i];
			}
			vector<vector<int>>dp(n+1, vector<int>(x+1,0));
			for (int i = 1; i <= n; ++i)
			{
				for (int j = 1; j <= x; ++j)
				{
					if(prices[i] > j) dp[i][j] = dp[i-1][j];
					else{
						dp[i][j] = max(dp[i-1][j], dp[i-1][j-prices[i]] + pages[i]);
					}
				}
			}
			cout<<dp[n][x];
		return 0;
	}