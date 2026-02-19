#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll i = 0, j = 0, ans = 0;

    map<ll,ll> mp;

    while(j < n){
        while(mp[a[j]] >= 1){
            mp[a[i]]--;
            i++;
        }

        mp[a[j]]++;

        ans = max(ans, j - i + 1);

        j++;
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}