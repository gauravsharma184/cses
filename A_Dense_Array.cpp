#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll ans = 0;

    for(ll i = 0;i < n - 1;i ++){
        ll mini = min(a[i],a[i + 1]);

        ll maxi = max(a[i],a[i + 1]);


        while(maxi > 2 * mini){
            mini *= 2;
            ans++;
        }
    }

    cout<<ans<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}