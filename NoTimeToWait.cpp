#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, H, x;
	cin>>N>>H>>x;
	int arr[N];
	for(int i=0; i<N; i++){
		cin>>arr[i];
	}
	bool flag = 0;
	for(int i=0; i<N; i++){
		if(arr[i]+x==H){
          flag = 1;
          break;
		}else{
			flag=0;
		}
	}
	if(flag){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}