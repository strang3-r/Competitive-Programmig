//fib_DP.cpp

#include <bits/stdc++.h>
using namespace std;

int fib(int n, vector<int> &dp){
	if(n == 0 or n == 1) return n;
	if(dp[n] != -1) return dp[n];

	int ans = fib(n-1, dp) + fib(n-2, dp);
	// storage step
	dp[n] = ans;
	return ans;                       
}
                 // Top Down 
                 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector <int> dp(n+1, -1);
	
	std::chrono::time_point<std::chrono::high_resolution_clock> start, end;
	start = std::chrono::high_resolution_clock::now();

	cout<<fib(n, dp);

	end = std::chrono::high_resolution_clock::now();
	long long elapsed_time = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();
	cout << "\n" << elapsed_time << "ms\n";
	return 0;
}