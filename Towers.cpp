#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> h(n);

    for(ll i = 0;i < n;i ++) cin>>h[i];


    multiset<ll> st;

    ll ans = 0;

    for(ll i = 0;i < n;i ++){
        auto it = st.upper_bound(h[i]);

        if(it == st.end()){
            ans++;
            
        }

        else st.erase(it);

        st.insert(h[i]);
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}