#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,r;
    cin>>n>>r;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++){
        cin>>a[i];
    }

    ll seated = 0, total = 0;

    for(ll i = 0;i < n;i ++){
        seated += 2 * (a[i]/2);

        total += a[i];
    }

    ll rem = total - seated;

    r -= seated/2;

    ll ans = seated;
    ll inc;

    if(rem <= r){
        inc = rem;
    }

    else inc = 2*r - rem;

    cout<<ans + inc<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}