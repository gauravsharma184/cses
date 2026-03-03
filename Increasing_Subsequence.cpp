#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n; i++) cin>>a[i];

    vector<ll> temp;

    for(ll i = 0;i < n;i ++) {
        ll m = temp.size();
        ll lb = lower_bound(temp.begin(),temp.end(),a[i]) - temp.begin();

        if(lb == m) {
            temp.push_back(a[i]);
        }

        else {
            temp[lb] = a[i]; 
        }
    }

    ll ans = temp.size();

    cout<<ans<<endl;
}
int main(){
    solve();
}