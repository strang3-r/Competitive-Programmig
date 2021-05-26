#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    int t;
    cin>>t;
    while(t--){
        int N, E, H, A, B, C;
        cin>>N>>E>>H>>A>>B>>C;
        int ans = 1e18;
        for (int cakes = 0; cakes <= N; cakes++)
        {
            if(E<cakes or H<cakes){
                break;
            }
            int maxE = (E-cakes)/2;
            int maxH = (H-cakes)/3;
            if(cakes + maxE + maxH < N)
                continue;
            int reqO, reqM;
            if( A < B){
                reqO = min(N-cakes, maxE);
                reqM = N-cakes-reqO;
            }else{
                reqM = min(N-cakes, maxH);
                reqO = N-cakes-reqM;
            }
            int price = cakes*C+reqO*A+reqM*B;
            ans = min(price, ans);
        }
        if(ans == 1e18)
            ans = -1;
        cout<<ans<<endl;
    }
    return 0;
}