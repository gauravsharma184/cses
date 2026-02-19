#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll m = 1e9 + 7;


    vector<ll> curr(x + 1,0);
    vector<ll> prev(x + 1, 0);

    prev[0] = 1;
    curr[0] = 1;

    for(ll i = 1;i <=n ;i ++){
        for(ll sum = 1;sum <= x;sum ++){
            if(sum >= a[i - 1]){
                curr[sum] = (curr[sum] + curr[sum - a[i - 1]]) % m;
            }

            curr[sum] = (curr[sum] + prev[sum]) % m;
        }

        prev = curr;


        for(ll k = 1;k <= x;k ++){
            curr[k] = 0;
        }
    }


    cout<<prev[x]<<endl;

}
int main(){
    solve();
}