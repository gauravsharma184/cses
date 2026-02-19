#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m,v;
    cin>>n>>m>>v;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++){
        cin>>a[i];
    }

    vector<ll> pre,suff,prefix;

    prefix.push_back(0);
    suff.push_back(n);
    pre.push_back(1);

    for(ll i = 0;i < n;i++){
        prefix.push_back(a[i] + prefix.back());
    }

    ll sum = 0;

    for(ll i = 0;i < n;i ++){
        sum += a[i];

        if(sum >= v){
            pre.push_back(i + 2);
            sum = 0;
        }
    }

    sum = 0;

    for(ll i = n - 1;i >= 0;i --){
        sum += a[i];

        if(sum >= v){
            suff.push_back(i);
            sum = 0;
        }
    }

    ll check = pre.size() - 1;

    if(check < m){
        cout<<-1<<endl;
        return;
    }

    ll ans = 0;

    for(ll x = 0;x <= m;x++){
        ll y = m - x;

        ll l = pre[x];

        ll r = suff[y];

        ll poss_ans = prefix[r] - prefix[l - 1];

        ans = max(ans,poss_ans);
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