//Grid_Paths3_CSES.cpp
#include <bits/stdc++.h>
using namespace std;
 
const int mxN = 1e4, mod = 1e9+7;
int n, dp[mxN][mxN];
string s[mxN];
	
int main(int argc, char const *argv[])
{  
	   clock_t start, end;
	  
	    /* Recording the starting clock tick.*/
	    start = clock();
	  
	  cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>s[i];
	}
	//base case
	dp[0][0] = 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if(i)
				dp[i][j] += dp[i-1][j];
			if(j)
				dp[i][j] += dp[i][j-1];
			dp[i][j] %= mod;
			if(s[i][j] == '*')
				dp[i][j] = 0;
		}
	}
	cout<<dp[n-1][n-1];
	    // Recording the end clock tick.
	    end = clock();
	  
	    // Calculating total time taken by the program.
	    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout<<endl;
	    cout << fixed 
	         << time_taken << setprecision(5);
	    cout << " sec " << endl;
	
	return 0;
}