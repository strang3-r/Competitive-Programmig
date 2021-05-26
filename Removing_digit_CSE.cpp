//Removing_digit_CSE.cpp
#include <bits/stdc++.h>
using namespace std;

const int mxN = 1e6	;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	vector <int> dp(mxN+1);
	for (int i = 1; i <= n; ++i)
	{
		dp[i] = 1e9;
		int temp = i;
		while(temp){
			dp[i] = min(dp[i], dp[i - temp%10] + 1);
			temp/=10;
		}
	}
	cout<<dp[n];
	   clock_t start, end;
	  
	    /* Recording the starting clock tick.*/
	    start = clock();
	  
	  
	  
	    // Recording the end clock tick.
	    end = clock();
	  
	    // Calculating total time taken by the program.
	    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	    cout<<endl<< fixed 
	         << time_taken << setprecision(5);
	    cout << " sec " << endl;
	return 0;
}