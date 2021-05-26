//frog1_AtCoder.cpp

#include <bits/stdc++.h>
using namespace std;


int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector<int>arr(n+1);
	for (int i = 1; i <= n; i++ )
	{
		cin>>arr[i];
	}
	vector<int> dp(n+1, 0);	
	// base case
	dp[1] = 0;
	dp[2] = abs(arr[2] - arr[1]);

	for (int i = 3; i < n; i++)
	{
		dp[i] = min(dp[i-1] + abs(arr[i] - arr[i-1]), dp[i-2] + abs(arr[i] - arr[i-2]));

	}
	cout<<dp[n];

	return 0;
}