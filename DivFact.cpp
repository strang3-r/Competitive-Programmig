// DivFact.cpp

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
// bitset
// bitset<50005> is_Prime(2);
vector<bool> is_Prime(50005, true);
vector<ll>primes;
void gen_prime(ll max_limit) {
	is_Prime[0] = is_Prime[1] = false;
	for(int i = 2; i*i <= max_limit; i++) {
		if(is_Prime[i]){
			// ith index is prime
			 for(int j = i*i; j <= max_limit; j += i){
			 	is_Prime[j] = false;
			 }
		}
	}
	for(int i = 0; i <= max_limit; i++){
		if(is_Prime[i]){
			primes.pb(i);
		}
	}

}

ll divisorOfFact(ll n){
  ll result = 1;

  for(int i = 0; primes[i] <= n; i++){
  	ll k = primes[i];
  	ll count = 0;
  	while(n/k != 0){
  		count = (count +(n/k))%mod;
  		k = k*primes[i];
  	}
  	result = (result%mod*(count+1)%mod)%mod;
  }


  return result;
} 

int main(int argc, char const *argv[])
{
	// file_i_o();

	// is_Prime.set(2);
	// cout<<is_Prime;
		
	gen_prime(50001);
	
	w(t){

		ll n;
		cin>>n;
		cout<<divisorOfFact(n)<<endl;

	}
		
	return 0;
}