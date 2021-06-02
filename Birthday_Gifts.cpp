#include<bits/stdc++.h>
#define ll long long int
using namespace std;


ll solve(){
	ll n, k;
	
	cin>>n>>k;
	vector<ll> arr(n);
	for(auto &x: arr){
		cin>>x;
	}
	sort(arr.begin(), arr.end());
	ll chef=0;
	ll sum = 0;
	while(k--){
		chef += arr.back();
		arr.pop_back();
		sum += arr.back();
		arr.pop_back(); 
	}
	sum += arr.back();
	cout<<max(chef, sum)<<endl;
}

int main(int argc, char const *argv[])
{   
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    ll t;
    cin>>t;
	while(t--){

		solve();

	}
	return 0;
}