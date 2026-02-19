#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){

    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    vector<ll> prefix(n,0),suffix(n,0);

    if(a[0] > 0) prefix[0] = a[0];

    if(a[n-1] < 0) suffix[n-1] = -a[n-1];

    for(ll i = 1;i < n;i ++){
        prefix[i] = prefix[i-1];

        if(a[i] > 0) prefix[i] += a[i];
    }


    for(ll i = n - 2;i >= 0;i --){
        suffix[i] = suffix[i+1];

        if(a[i] < 0){
            suffix[i] -= a[i];
        }
    }

    ll ans = 0;

    for(ll i = 0;i < n;i ++){
        ans = max(ans,prefix[i] + suffix[i]);
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