// XxOoRr.cpp

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
	w(t){

		int n,k;
		int count;
		cin>>n>>k;
		vector<int> arr(n);
		int max = -1;

		for(int& i :arr){
			cin>>i;
		}

		vector<int> SetBit(31);

		loop(i, 0, 30){
			count = 0;
			for(int&i : arr){
				if(i%2!=0){
					count++;
				}

				i/=2;

			}	

			SetBit[i] = count;		

		}

		int ans = 0;

		loop(i, 0, 30){
			if(SetBit[i]%k==0){
				ans += SetBit[i]/k;
			}else{
				ans += SetBit[i]/k + 1;
			}
		}
		cout<< ans <<endl;
	
	}
	return 0;
}