#include <bits/stdc++.h>
using namespace std;

void solution(){
    string str;
    cin>>str;
    int ans=0;
    for(int i=0; i<str.size();i++ )
    {
        if(str[i]=='1')
        {
            ans++;
            for(int j=i+1; j<str.size();j++){
                if(str[j]=='1'){
                    i++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
   }
   return 0;
}