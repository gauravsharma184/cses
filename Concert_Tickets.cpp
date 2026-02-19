#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n),b(m);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    for(ll i = 0;i < m;i ++) cin>>b[i];


    multiset<ll> st;

    st.insert(0LL);

    for(ll i = 0;i < n;i ++){
        st.insert(a[i]);
    }


    for(ll i = 0;i < m;i ++){
        ll price = b[i];

        auto it = st.lower_bound(price);

        // cout<<*(it)<<' '<<price<<endl;

        

        if(it != st.end() && *(it) == price){
            cout<<price<<endl;
            st.erase(it);
        }

        else{
            it--;
            if(it == st.begin()){
                cout<<-1<<endl;
            }

            else{
                cout<<*(it)<<endl;
                st.erase(it);
            }
        }
    }
}
int main(){
    solve();
}