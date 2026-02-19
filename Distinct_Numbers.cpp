#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);


    for(ll i = 0;i < n;i ++) cin>>a[i];


    map<ll,ll> mp;

    for(auto x : a) mp[x]++;


    ll ans = mp.size();

    cout<<ans<<endl;
}
int main(){
    solve();
}