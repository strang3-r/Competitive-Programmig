// Xor_Equality.cpp

#include <bits/stdc++.h>
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
    

ll power(ll a, ll b, ll c){
	ll res = 1 ;
	a = a%c;

	if(a == 0)
		return 0;
	while(b>0){
		if(b & 1)
			res = (res*a)%c;
		b = b>>1;
		a = (a*a)%c;

	}
	return res;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		
		ll n;
		cin>>n;
		ll ans = power(2, n-1, mod);
		cout<<ans<<endl;
	}
		
	return 0;
}