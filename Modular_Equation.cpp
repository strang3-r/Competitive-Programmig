// Modular_Equation.cpp
#include<bits/stdc++.h>
using namespace std;
long long int number(long long int n, long long int curr) {
  long long int ans = 0;
  for (int i=2; i<=sqrt(n); i++){
    if (n%i == 0){
        if (n/i == i){
        	if(i < curr) 
        		ans++;
        }
        else{
        	if(i < curr and n/i < curr) 
        		ans += 2;
        	else 
        		if (i < curr or n/i < curr) 
        			ans++;         	
        } 
    }
}
  return ans;
}
void solveit(){
	long long int n, m; 
	cin >> n >> m;
	long long int result = n-1;
	long long int t = min(n, m);
	for(long long int i = 3; i <= t; i++) {
		long long int curr = (floor(m/i))*i;
		result += number(curr, i);	
	}
	if(n > m) {
		result += ((n - m - 1) * (n - m) / 2);
		result += ((m-1) * (n-m));
	}
	cout << result << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		solveit();
	}
	return 0;
}