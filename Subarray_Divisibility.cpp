#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);


    for(ll i = 0;i < n;i ++) cin>>a[i];


    vector<ll> prefix(n + 1, 0);

    prefix[0] = 0;

    ll ans = 0;


    for(ll i = 0;i < n;i ++){
        prefix[i + 1] = prefix[i] + a[i]; 
    }

    map<ll,ll> mp;

    

    


    for(ll i = 0;i <= n;i ++){
        ll add = ((abs(prefix[i]) + n - 1)/n) * n;

        

        

        ll req = (prefix[i] + add) % n;

        // cout<<req<<' ';


        if(mp.find(req) != mp.end()) ans += mp[req];


        mp[req]++;
    }

    // cout<<endl;

    cout<<ans<<endl;
}
int main(){
    solve();
}