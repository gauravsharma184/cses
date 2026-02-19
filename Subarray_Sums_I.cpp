#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n; i++) cin>>a[i];


    vector<ll> prefix(n+1);

    prefix[0] = 0;


    for(ll i = 0;i < n;i ++){
        prefix[i + 1] = a[i] + prefix[i];
    }


    map<ll,ll> mp;

    ll ans = 0;


    for(ll i = 0;i <= n;i ++){
        ll req = prefix[i] - x;

        if(mp.find(req) != mp.end()){
            ans += mp[req];
        }

        mp[prefix[i]]++;
    }


    cout<<ans<<endl;



}
int main(){
    solve();
}