#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
   cin>>n;
 
   vector<ll> a(n);
 
   
 
   set<ll> st;
 
   set<pair<ll,ll>> Vals;
 
   for(ll i = 0;i < n;i ++){
        cin>>a[i];
        st.insert(i);
        Vals.insert({a[i],i});
   }
 
   ll ans = 0;
 
   while(st.size() > 1){
        auto f = Vals.begin();
 
        ll val = (*f).first ,idx = (*f).second;
 
        Vals.erase(f);
 
        ll l,r;
 
        auto g = st.lower_bound(idx);
 
        if(g != st.begin()){
            g--;
            l = *g; 
        }
 
        else{
            l = *(--st.end());
        }
 
        auto h = st.upper_bound(idx);
 
        if(h != st.end()){
            r = *h;
        }
 
        else r = *(st.begin());
 
        ans += min(a[l],a[r]);
 
        st.erase(idx);
 
 
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