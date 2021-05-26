// Max_Subarray.cpp
#include <bits/stdc++.h>
/*#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;*/
using namespace std;
#define ff                 first
#define ss                 second
#define endl               "\n"
#define ll                 long long
#define ld                 long double
#define loop(a, b, c)      for(ll (a) = (b); (a)<=(c); (a)++)
#define looprev(a, b, c)   for(ll (a) = (b); (a)>=(c); (a)--)
#define pb                 push_back
#define mp                 make_pair
#define pii                pair<ll, ll>
#define vi                 vector<ll>
#define mii                map<ll, ll>
#define pqb                priority_queue<ll>
#define pqs                priority_queue<int, vi, greater<ll> >
#define setbits(x)         __builtin_popcountll(x)
#define zrobits(x)         __builtin_ctzll(x)
#define mod                1000000007
#define inf                1e18
#define ps(x, y)           fixed<<setprecision(y)<<x
#define mk(arr,n,type)     type *arr = new type[n];
#define w(t)               int x; cin>>x; while(x--)
/*mt19937                    rng(chrono::steady_clock::now,time_since_epoch(),count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
*/
    
void file_i_o(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    #ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
}

int Maximum_Sum_Subaaray(int arr[], int n){		//overall Time Complexity O(N^3)
	int ans = INT_MIN;
	loop(sub_array_size, 1, n){
		loop(start_index, 0, n-1){
			if(start_index + sub_array_size > n) //Subarray exceeds array bound
				break;
			int sum = 0;
			loop(i, start_index, (start_index + sub_array_size)-1){
				sum += arr[i];
				
			} 
			ans = max(ans, sum);
		}

	}
	return ans;
}

int Max_Sum_Subarray(int arr[], int n){ //Total Time Comlexity O(N^2)
	int ans = INT_MIN;
	loop(start_index, 0, n-1){
		int sum = 0;
		loop(sub_array_size, 1, n){
			if(start_index + sub_array_size > n) // Subarray exceed array bounds
				break;
			sum += arr[start_index+sub_array_size - 1];  //Last Element of new subarray
			ans = max(ans, sum);
		}
	}
	return ans;
}

// Divide and Conquere Rule

int Max_Subarray_Sum(int arr[], int n){ //Total Time Complexity O(NlogN)
	if(n == 1){
		return arr[0];
	}
	int m = n/2;
	int left_MSS = Max_Subarray_Sum(arr, m);
	int right_MSS = Max_Subarray_Sum(arr+m, n-m);

	int leftSum = INT_MIN;
	int rightSum = INT_MIN;
	int sum = 0;

	loop(i, m, n-1){
		sum += arr[i];
		rightSum = max(rightSum, sum);
	}
	sum = 0;
	looprev(i, m-1, 0){
		sum += arr[i];
		leftSum = max(leftSum, sum);
	}
	int ans = max(left_MSS, right_MSS);

	return max(ans, leftSum+rightSum);

}

int main(int argc, char const *argv[])
{
	
	int n;
	cin>>n;

	int arr[n];

	loop(i, 0, n-1){
		cin>>arr[i];
	}

	cout<<Max_Subarray_Sum(arr, n)<<endl;
	
	
	return 0;
}