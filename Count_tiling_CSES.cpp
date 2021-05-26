// Count_tiling_CSES.cpp
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
void generate_next_masks(int current_mask, int i, int next_mask, int n, vi &next_masks)
{
	if(i == n+1){
		next_masks.pb(next_mask);
		return;
	}
	if((current_mask & (1<<i)) != 0)
		generate_next_masks(current_mask, i+1, next_mask, n, next_masks);
	if(i != n)
		if((current_mask & (1<<i)) == 0 and (current_mask & (1 <<(1+1))) == 0)
			generate_next_masks(current_mask, i+2, next_mask, n, next_masks);
		if((current_mask & (1<<i)) == 0)
			generate_next_masks(current_mask, i+1, next_mask + (1<<i), n, next_masks);

}
int dp[1001][1<<11];
int solve(int col, int mask, const int m, const int n){
	//base case
	if(col == m+1){
		if(mask == 0)
			return 1;
		return 0;
	}
	if(dp[col][mask] != -1)
		return dp[col][mask];
	int ans = 0;
	vi next_masks;
	generate_next_masks(mask, 1, 0, n, next_masks);
	for (int next_mask: next_masks)
	{
		ans = (ans+solve(col+1, next_mask, m, n))%mod;
	}
	return dp[col][mask] = ans;
}
int main(int argc, char const *argv[])
{
	// file_i_o();
	int n, m;
	cin>>n>>m;
	memset(dp, -1, sizeof dp);
	cout<<solve(1, 0, m, n);

	return 0;
}