#include <iostream>
using namespace std;
bool isPrime(int n){
  for(int i=2;i*i<=n;i++)
    if(n%i==0)
      return false;
  return true;
}
int main(){
  int t, n;
  cin>>t;
  for(int i=0;i<t;i++){
    cin>>n;
    if(isPrime(n) and n!=1)
      cout<<"yes\n";
    else cout<<"no\n";
  }
  return 0;
}