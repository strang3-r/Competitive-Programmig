// max.cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
   int arr[] = {2, 1, 6, 9, 4, 10, 15, 21};
   int N = 8;
   cout<<"Maximum Value = "<<(*max_element(arr, arr+N))<<endl;
   cout<<"Minimum Value = "<<(*min_element(arr, arr+N));
   return 0;
}	