#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll Get(vector<ll>&parent, ll a){
	return parent[a]=(parent[a]==a ? a : Get(parent, parent[a]));
}

ll Union(vector<ll>&parent, vector<ll>&rank, ll a, ll b){
	a = Get(parent, a);
	b = Get(parent, b);
	if(rank[a] == rank[b]) rank[a]++;
	if(rank[a] > rank[b]){
		parent[b] = a;
	}
	else{
		parent[a] = b; 	
	}
}

int main(int argc, char const *argv[])
{ 
	ll n;
	cin>>n;
	vector<ll> parent(n+1);
	vector<ll> rank(n+1, 1);
	for (ll i = 0; i < n; i++)
	{
		parent[i] = i;
	}
	vector<bool> total(n, false); //how many unique char we have visited till now
	vector<bool> current(n, false);//char in current string
	for (ll j = 0; j < n; j++)
	{
		string str;

		cin>>str; 
		for (ll i = 0; i < n; i++) current[i] = false;
			for(char ch: str){
				current[ch - 'a'] = true;
			}
			for (ll i = 0; i < n; i++)
			{
				if (current[i] == true)
				{
					total[i] = true;
					Union(parent, rank, str[0] - 'a', i);
				}
			}
	}	
	ll count=0;
	for (ll i = 0; i < n; i++)
	{
		if(total[i] == true and Get(parent, i) == i)
			count++;
	}
	cout<<count<<endl;

	return 0;
}