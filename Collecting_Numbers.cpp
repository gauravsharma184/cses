#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    vector<ll> pos(n+1);

    for(ll i = 0;i < n;i ++){
        pos[a[i]] = i;
    }

    ll ans = 1;

    for(ll i = 2;i <= n;i ++){
        if(pos[i] < pos[i - 1]){
            ans++;
        } 
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}