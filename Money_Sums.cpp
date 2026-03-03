#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;
    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    //dp[i][sum] : is it possible to make sum from a prefix of length i
    //take 
    /*
        take
            dp[i][sum] = dp[i][sum] || dp[i - 1][sum - a[i - 1]]
        not take
            dp[i][sum] = dp[i][sum] || dp[i - 1][sum]
    
    */

    // final answer dp[n][sum]

    vector<vector<bool>> dp(n + 1, vector<bool>(1e5 + 1,false));

    for(ll i = 0;i <= n;i ++) dp[i][0] = true;

    for(ll i = 1;i <= n;i ++){
        for(ll sum = 1;sum <= 1e5; sum ++){
            if(sum >= a[i - 1]) {
                dp[i][sum] = (dp[i][sum] || dp[i - 1][sum - a[i - 1]]);
            }

            dp[i][sum] = (dp[i][sum] || dp[i - 1][sum]);
        }
    }

    vector<ll> ans;

    for(ll sum = 1; sum <= 1e5; sum ++ ){
        if(dp[n][sum]){
            ans.push_back(sum);
        }
    }

    cout<<ans.size()<<endl;

    for(auto x : ans){
        cout<<x<<' ';
    }

    cout<<endl;

    

}
int main(){
    solve();
}