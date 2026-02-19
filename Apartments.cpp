#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n,m,k;
    cin>>n>>m>>k;

    multiset<ll> st;

    for(ll i = 0;i < n;i ++){
        ll x;
        cin>>x;

        st.insert(x);
    }

    vector<ll> ap(m);

    for(ll i = 0;i < m;i ++) cin>>ap[i];


    sort(ap.begin(),ap.end());


    ll ans = 0;


    for(ll i = 0;i < m;i ++){
        auto it1 = st.lower_bound(ap[i] - k);

        auto it2 = (st.upper_bound(ap[i] + k));

        if(it2 != st.begin()) it2--;




        

        


        
        if(it1 != st.end() && *(it1) >= ap[i] - k && *(it1) <= ap[i] + k){
            st.erase(it1);
            ans++;
        }

        else if(*(it2) >= ap[i] - k && *(it2) <= ap[i] + k){
            st.erase(it2);
            ans++;
        }

    }

    cout<<ans<<endl;

    
}
int main(){
    solve();
}