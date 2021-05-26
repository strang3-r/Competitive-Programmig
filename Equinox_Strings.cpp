// Equinox_Strings.cpp

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
	w(t){
		
		ll N,A,B;
		cin>>N>>A>>B;
		
		ll k=0;
		ll l=0;
		// loop(i, 0, N-1){
			loop(j, 0, N-1){
				string str;
				cin>>str;
				if(str[0] == 'E' or str[0] == 'Q' or str[0] == 'U' or str[0] == 'I' or str[0] == 'N' or str[0] == 'O' or str[0] == 'X'){
					 k += A;
				}
				else{
					 l += B;
				}
			}
		// }
		if(k < l){
			cout<<"ANURADHA"<<endl;
		}
		else if(k > l){
			cout<<"SARTHAK"<<endl;
		}
		else {
			cout<<"DRAW"<<endl;
		}
	}
		
	return 0;
}