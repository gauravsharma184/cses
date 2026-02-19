#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll> getDigits(ll no){
    vector<ll> ans;


    while(no > 0){
        ll digit = no % 10;
        ans.push_back(digit);
        no /= 10;
    }




    return ans;
}
void solve(){
    ll n;
    cin>>n;

    vector<ll> dp(n + 1,1e14);

    dp[0] = 0;


    for(ll i = 1;i <= n;i ++){
        vector<ll> digit = getDigits(i);

        for(auto x : digit){
            dp[i] = min(dp[i], 1 + dp[i - x]);
        }
    }


    cout<<dp[n]<<endl;




}
int main(){
    solve();
}