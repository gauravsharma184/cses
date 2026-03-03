#include<bits/stdc++.h>
using namespace std;
#define ll long long

// ll dp[501][65000] = {0};
ll mod = 1e9 + 7;

void solve(){
    ll n;
    cin>>n;


    

    ll tsum = (n * (n + 1)) / 2;

    if(tsum % 2) {
        cout<<0<<endl;
        return;
    }

    // cout<<"tsum: " << tsum / 2 << endl;

    vector<vector<ll>> dp(n + 1,vector<ll>(tsum/2 + 1, 0));


    for(ll i = 0;i <= n;i ++) dp[i][0] = 1;

    for(ll i = 1;i <= n;i ++) {
        for(ll x = 1; x <= tsum/2; x ++) {
            //take

            if(x >= i) {
                dp[i][x] = (dp[i][x] + dp[i - 1][x - i]) % mod;
            }

            dp[i][x] = (dp[i][x] + dp[i - 1][x]) % mod;
        }
    }

    ll ways = dp[n][tsum / 2];

    cout<<ways / 2<<endl;







}
int main(){
    solve();
}