// Tic_Tac_Toe.cpp

#include <bits/stdc++.h>
using namespace std;


char str[3][3];


void solve(){
int x_count = 0;
int o_count = 0;
int count = 0;
	for (int i = 0; i < 3; ++i){
			for (int j = 0; j < 3; ++j){
				cin>>str[i][j];
				if(str[i][j] == 'X')
					x_count++;
				else if(str[i][j] == 'O')
					o_count++;
				else if(str[i][j] == '_')
					count++;
			}
		}
		int win_x = 0;
		int win_o = 0;
		for (int i = 0; i < 3; ++i){
			if(str[i][0] == 'X' and str[i][1] == 'X' and str[i][2] == 'X')
				win_x = 3;
		}
		for (int i = 0; i < 3; ++i){
			if(str[0][i] == 'X' and str[1][i] == 'X' and str[2][i] == 'X')
				win_x = 3;
		}
		for (int i = 0; i < 3; ++i){
			if(str[i][0] == 'O' and str[i][1] == 'O' and str[i][2] == 'O')
				win_o = 3;
		}
		for (int i = 0; i < 3; ++i)
		{
			if(str[0][i] == 'O' and str[1][i] == 'O' and str[2][i] == 'O')
				win_o = 3;
		}
		if(str[0][0] == 'X' and str[1][1] == 'X' and str[2][2] == 'X')
			win_x = 3;
		if(str[2][0] == 'X' and str[1][1] == 'X' and str[0][2] == 'X')
			win_x = 3;
		if(str[0][0] == 'O' and str[1][1] == 'O' and str[2][2] == 'O')
			win_o = 3;
		if(str[2][0] == 'O' and str[1][1] == 'O' and str[0][2] == 'O')
			win_o = 3;

		if((win_x == 3 and win_o == 3) or ((x_count - o_count)>1) or (o_count > x_count) or (x_count == o_count and win_x ==3) or (x_count > o_count and win_o == 3)){
			cout<<3<<endl;
			return;
		}			
		if(win_x == 3 or win_o == 3 or count == 0){
			cout<<1<<endl;
			return;
		}
		cout<<2<<endl;
}

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--){
		
		solve();

	}
		
	return 0;
}