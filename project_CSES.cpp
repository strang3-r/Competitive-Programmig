// project_CSES.cpp
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
#define mid(l,r)           (l+(r-l)/2)
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

struct jobs
{
	ll s, f, p;
};
bool cmp(jobs a, jobs b){
	return a.f < b.f;
}

ll binarySearch(jobs arr[], int i){
	ll lo = 0, hi = i-1;
	while(lo <= hi){
		ll m = mid(lo, hi);
		if(arr[m].f < arr[i].s){
			if(arr[m+1].f < arr[i].s){
				lo = m + 1;
			}else{
				return m;
			}
		}else{
			hi = m - 1;
		}
		
	}
	return -1;
}

int main(int argc, char const *argv[])
{
	// file_i_o();
    ll n;
    cin>>n;
    struct jobs arr[n];
    for (int i = 0; i <= n-1; ++i){
    	cin>>arr[i].s>>arr[i].f>>arr[i].p;
    }
    sort(arr, arr+n, cmp);
    vi dp(n, 0);
    dp[0] = arr[0].p; /*base case*/
    for (int i = 1; i <= n-1; ++i){
    	ll incl = arr[i].p; /*including alone*/  
    	ll idx = binarySearch(arr, i);
    	if(idx != -1){
    		incl += dp[idx];
    	}
    	ll exl = dp[i-1];
    	dp[i] = max(incl, exl);
    }
    cout<<dp[n-1];

	return 0;
}