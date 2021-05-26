//coin_combination1_cse.cpp

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n>>x;
	vector<int>dp(x+1, 0);
	//base case
	dp[0] = 1;
    vector<int>coin(n);
    for (int i = 0; i <= n-1; i++)
    {
    	cin>>coin[i];
    }
    for (int i = 1; i <= x; i++)
    {
    	for (int j = 0; j <= n-1; j++)
    	{
    		if(coin[j] > i) continue;
    		dp[i] = (dp[i] + dp[i-coin[j]])%mod;
    	}
    }
    cout<<dp[x]%mod;

	return 0;
}