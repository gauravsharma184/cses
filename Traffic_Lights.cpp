#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll x,n;
    cin>>x>>n;

    vector<ll> p(n);


    for(ll i = 0;i < n;i ++) cin>>p[i];


    multiset<ll> d;

    set<ll> st;

    d.insert(x);

    st.insert(0);
    st.insert(x);

    for(ll i = 0;i < n;i ++){
        auto it = st.upper_bound(p[i]);

        ll e = *(it);

        ll s = *(--it);

        // cout<<s<<' '<<e<<endl;

        auto f = d.find(e - s);

        // cout<<*f<<endl;

        d.erase(f);

        st.insert(p[i]);

        d.insert(p[i] - s);
        d.insert(e - p[i]);

        auto ans_it = d.rbegin();

        ll maxi = *(ans_it);

        cout<<maxi<<' ';
    }

    cout<<endl;



    
}
int main(){
    solve();
}