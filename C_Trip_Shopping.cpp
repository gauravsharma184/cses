#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n),b(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    for(ll i = 0;i < n;i ++) cin>>b[i];

    vector<pair<ll,ll>> arr;

    for(ll i = 0;i < n;i ++){
        if(a[i] >= b[i]){
            arr.push_back({b[i],a[i]});
        }

        else arr.push_back({a[i],b[i]});
    }


    sort(arr.begin(),arr.end());

    ll ans = 0;

    for(ll i = 0;i < n;i ++){
        ans += (arr[i].second - arr[i].first);
    }

    for(ll i = 1;i < n;i ++){
        if(arr[i].first <= arr[i-1].second){
            cout<<ans<<endl;
            return;
        }
    }

    ll add = 1e14;

    for(ll i = 1;i < n;i ++){
        ll poss_add = 2*(arr[i].first - arr[i - 1].second);

        add = min(add,poss_add);
    }

    cout<<ans + add<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}