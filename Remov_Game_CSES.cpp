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
#define w(t)               int x; cin>>x; while(x--)
/*mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int main(int argc, char const *argv[])
{
    // file_i_o();
	int n;
	cin>>n;
	vi arr(n);
	loop(i, 0, n-1) cin>>arr[i];
	vector<vector<ll> >dp(n, vector<ll>(n, 0));
	loop(len, 1, n){
		for (int i = 0; i+len <= n; ++i)
		{
			int j= i+len-1;
			ll x,y,z;
			x = (i+2<=j)?dp[i+2][j]:0;
			y = (i+1 <= j-1)?dp[i+1][j-1]:0;
			z = (i<=j-2)?dp[i][j-2]:0;
			dp[i][j] = max(arr[i]+min(x,y), arr[j]+min(y, z));
		}
	}
	cout<<dp[0][n-1];
	return 0;
}