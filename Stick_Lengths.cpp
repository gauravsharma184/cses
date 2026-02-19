#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    sort(a.begin(),a.end());


    ll median = a[n/2];

    ll ans = 0;

    for(auto x : a){
        ans += abs(median - x);
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}