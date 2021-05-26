#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;*/
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
/*#define w(t)               int x; cin>>x; while(x--)*/
/*mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
    


int main(int argc, char const *argv[])
{
	//file_i_o();
	ll a, b;
	cin>>a>>b;
	vector<vector<int> >dp(a+1, vector<int>(b+1, INT_MAX));
	loop(i, 0, a){	
		loop(j, 0, b){
			 if(i == j) dp[i][j] = 0;
			 else{
			 	//vertical cut
			 	loop(k, 1, i-1){
			 		dp[i][j] = min(dp[i][j], 1+dp[k][j]+dp[i-k][j]);
			 	}//horizantal cut
			 	loop(k, 1, j-1){
			 		dp[i][j] = min(dp[i][j], 1+dp[i][k]+dp[i][j-k]);
			 	}
			 }
		}
	}
	cout<<dp[a][b];
	return 0;
}