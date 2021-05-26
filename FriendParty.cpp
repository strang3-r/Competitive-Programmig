//FriendParty.cpp

#include <bits/stdc++.h>
using namespace std;

int FriendParty(int n){
	vector<int> dp(n+1, 0);
	dp[1] = 1; //1 friend 1 way
	dp[2] = 2; //2 friend 2 way
	for (int i = 3; i <= n; i++)
	{
		dp[i] = dp[i-1]+(i-1)*dp[i-2];
	}
	return dp[n];
}
  //bottom Up Approach
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	cout<<FriendParty(n);
	return 0;
}