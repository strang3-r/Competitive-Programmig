 //SpaceArray.cpp

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int test_case;
	cin>>test_case;
	while(test_case--){
		int No_element;
		cin>>No_element;
		int arr[No_element];
		for (int i = 0; i < No_element; i++){
			cin>>arr[i];
		}
		sort(arr, arr+No_element);
		bool flag =0;
		int value = 0;
		for (int i = 0; i < No_element; ++i)
		{
			if(i+1 - arr[i] < 0){
				flag = 1;
				break;
			}
			value = value + (i+1-arr[i]);
		}
		if(flag){
			cout<<"Second"<<endl;
		}
		else{
			if(value%2==0){
				cout<<"Second"<<endl;
			}
			else{
				cout<<"First"<<endl;
			}
		}
	}

	return 0;
}