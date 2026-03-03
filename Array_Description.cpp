#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
   ll n,m;
   cin>>n>>m;

   ll mod = 1e9 + 7;

   // dp[i][next] : number of ways to make a valid prefix of length i with next element
   //dp[i][next] if(x[i-1] == 0)
   /*
    and if(x[i - 1] != 0)
   
   */

   vector<ll> x(n);


   for(ll i = 0;i < n;i ++) cin>>x[i];

   vector<vector<ll>> dp(n,vector<ll>(m + 1, 0));

   for(ll j = 1;j <= m;j ++) dp[0][j] = 1;

   for(ll i = 1;i < n;i ++){
        if (x[i - 1] == 0){
            for(ll next = 1; next <= m; next ++) {
                for(ll add = - 1;add<=1;add ++){
                    ll element = next + add;
                    if(element > 0 && element <= m) {
                        dp[i][next] = (dp[i][next] + dp[i-1][element]) % mod;
                    }
                }
            }
        }

        else {
            for(ll add = - 1;add<=1;add ++){
                    ll element = x[i - 1] + add;
                    if(element > 0 && element <= m) {
                        dp[i][element] = (dp[i][element] + dp[i-1][x[i - 1]]) % mod;
                    }
                }
        }
   }


   if(x[n - 1]) cout<<dp[n - 1][x[n-1]];
   
   else {
        ll ans = 0;
        for(ll next = 1; next <= m; next ++){
            ans = (ans + dp[n - 1][next]) % mod;

        }

        cout<<ans<<endl;
   }


}
int main(){
    solve();
}