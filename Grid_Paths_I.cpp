#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    ll m = 1e9 + 7;

    vector<string> arr;

    for(ll i = 0;i < n;i ++){
        string s;
        cin>>s;
        arr.push_back(s);
    }

    


    vector<vector<ll>> dp(n + 1,vector<ll>(n + 1,0));

    arr[n - 1][n - 1] == '*' ? dp[n - 1][n - 1] = 0 : dp[n - 1][n - 1] = 1;
    // dp[n-1][n - 1] = 1;

    for(ll i = n - 1;i >= 0;i --){
        for(ll j = n - 1;j >= 0;j --){
            if(arr[i][j] != '*'){
                dp[i][j] = (dp[i][j] + dp[i][j + 1]) % m;
                dp[i][j] = (dp[i][j] + dp[i + 1][j]) % m;
            }
        }
    }


    cout<<dp[0][0]<<endl;


    
}
int main(){
    solve();
}