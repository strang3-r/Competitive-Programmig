// Three_Way_Communications.cpp
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
		int R;
		int x1, y1, x2, y2, x3, y3;
		cin>>R;
		cin>>x1>>y1;
		cin>>x2>>y2;
		cin>>x3>>y3;
		int d1 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		int d2 = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		int d3 = (x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
		if((d1<=R*R and d2<=R*R) or (d1<=R*R and d3<=R*R) or (d2<=R*R and d3<=R*R))
			cout<<"yes"<<endl;
		else
			cout<<"no"<<endl;
	}
	return 0;
}