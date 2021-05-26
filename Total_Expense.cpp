// Total_Expense.cpp
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		float  quantity, price;
		cin>>quantity>>price;
		double total_expence = quantity*price ;
		double discount;
		if(quantity > 1000){
			discount = total_expence/10;
			total_expence = total_expence-discount;	
		}
		printf("%0.6f", total_expence);
		cout<<endl;

	}
	return 0;
}