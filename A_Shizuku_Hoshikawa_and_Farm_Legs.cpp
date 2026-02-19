#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    ll ans = 0;

    for(ll x = 0;x <=n;x++){
        ll c = 2 * x;

        ll co = n - c;

        if(co >= 0 && co % 4 == 0) ans++;
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