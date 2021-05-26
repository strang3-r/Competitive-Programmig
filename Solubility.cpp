// Solubility.cpp

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
    

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
	
		int a, b, c;
		cin>>c>>a>>b;
		int ans=0;
		ans = a+(100-c)*b;
		int Solubility = 0;
		Solubility = ans*10;
		cout<<Solubility<<endl;		
		
	}
		
	return 0;
}