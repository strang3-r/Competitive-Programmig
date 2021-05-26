//coin_combination1_cse.cpp

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007

const int mxN = 100, mxX = 1e6;
int n,coin[mxN],x;
long long dp[mxX+1];        

int main(int argc, char const *argv[])
{
	
	cin>>n>>x;
    for (int i = 0; i < n; ++i)
    {
    	cin>>coin[i];
    }
    //base case

    dp[0] = 1;
        for (int j = 0; j < n; ++j)
    for (int i = 1; i <= x; ++i){      
                if(coin[j] <= i)
                   dp[i] = (dp[i] + dp[i-coin[j]])%mod;
            }
    cout<<dp[x];

	return 0;
}