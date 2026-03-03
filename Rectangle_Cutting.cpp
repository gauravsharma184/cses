#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;

    vector<vector<ll>> dp(a+1,vector<ll>(b+1,1e15));

    for(ll i = 0;i <= min(a,b); i++){
        dp[i][i] = 0;
    }


    for(ll x = 1;x <= a; x++){
        for(ll y = 1; y <= b; y ++){
            //vertical cut

            for(ll k = 1;k <y; k ++){
                 
                    dp[x][y] = min(1 + dp[x][k] + dp[x][y - k],dp[x][y]);
                
            }

            //horizontal cut

            for(ll k = 1;k < x; k ++) {
                dp[x][y] = min(dp[x][y], 1 + dp[k][y] + dp[x - k][y]);
            }
        }
    }

    cout<<dp[a][b]<<endl;
}
int main(){
    solve();
}