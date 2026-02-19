#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;

    cin>>n;

    /*
        dp[i] : no. of ways to make i by throwing a dice one or more times

        dp[i] = dp[i-1] + dp[i - 2] + dp[i - 3]

        dp[n]
    
        dp[0] = 1;
    */

    ll m = 1e9 + 7;



    vector<ll> dp(n + 1);

    dp[0] = 1;

    for(ll i = 1;i <= n;i ++){
        for(ll j = 1;j <= 6;j ++){
            if(i - j >= 0){
                dp[i] = (dp[i] + dp[i - j])% m;
            }
        }
    }

    cout<<dp[n]<<endl;
}
int main(){
    solve();
}