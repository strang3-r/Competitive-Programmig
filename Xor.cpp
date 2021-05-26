//Xor.cpp

#include <bits/stdc++.h>
using namespace std; 
#define ll long long
#define endl "\n"


int main(int argc, char const *argv[])
{
	int test_case;
	cin>> test_case;
	while(test_case--){
		ll C;
		cin>>C;
		ll D = ceil(log2(C));
		if(C == pow(2,D)){
			D = ceil(log2(C))+1;
		}
		ll maxx = pow(2, D);
		ll ans = 0;
		ll j = (maxx/2)-1;
		ll i = maxx - (C-j);
		ans = j*i;
		cout<<ans<<endl;
	}
	return 0;
}