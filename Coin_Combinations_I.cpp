#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    vector<ll> dp(x + 1, 0);

    ll m = 1e9 + 7;

    dp[0] = 1;

    for(ll sum = 0; sum <= x; sum ++){
        for(ll i = 0;i < n;i ++){
            if(sum >= a[i]){
                dp[sum] = (dp[sum] + dp[sum - a[i]])%m;
            }
        }
    }

    cout<<dp[x]<<endl;
}
int main(){
    solve();
}