//Arra_Desc_CSES.cpp
	#include <bits/stdc++.h>
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
	std::ios::sync_with_stdio(false);
	int T = 1;
	//cin>>T;
	// cin.ignore(); must be there when using getline(cin, s)
	while(T--)
	{
		ll n,m;
		cin>>n>>m;
		vi arr(n);
		for (int i = 0; i <= n-1; ++i)
		{
			cin>>arr[i];
		}
		vector<vector<int> >dp(m+1, vector<int>(n, 0));
		for (int i = 0; i <= n-1; ++i)
		{ 	
			if (i == 0)
			{
		    	if (arr[i] != 0){
			        dp[arr[i]][i] = 1;
    		    }else{
					for (int j = 1; j <= m; ++j){	
							dp[j][i] = 1;
					}
				}
				continue;
			}
			if(arr[i] != 0){
				dp[arr[i]][i] = ((arr[i]-1>0)?dp[arr[i]-1][i-1]%mod:0) + dp[arr[i]][i-1]%mod + ((arr[i]+1 <= m) ? dp[arr[i]+1][i-1]%mod : 0);
			}else{
				for (int j = 1; j <= m; ++j)
				{
					dp[j][i] = dp[j][i-1];
					if(j > 1) dp[j][i] = dp[j][i]%mod + dp[j-1][i-1]%mod;
					if(j < m) dp[j][i] = dp[j][i]%mod + dp[j+1][i-1]%mod;
					dp[j][i]%=mod;
				}
			}
			
		}
		if (arr[n-1] != 0){
			cout<<dp[arr[n-1]][n-1]%mod;
		}
		else{
			ll result = 0;
			for (int j = 1; j <= m; ++j)	{
				result = (result%mod + dp[j][n-1]%mod)%mod;
			}
			cout<<result;
		}
		
	}
	return 0;
}