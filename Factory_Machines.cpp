#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check(ll time, vector<ll>& a, ll t){
    ll n = a.size();

    ll pr = 0;

    for(ll i = 0;i < n;i ++){
        if(pr > 1e9) break;

        pr += time/a[i];
    }

    return pr >= t;
}

void solve(){
    ll n,t;
    cin>>n>>t;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    ll low = 1, high = 1e18, ans = 1e18;

    while(low <= high){
        ll time = low + (high - low)/ 2;


        if(check(time, a, t)){
            ans = min(ans, time);
            high = time - 1;
        }

        else low = time + 1;
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}