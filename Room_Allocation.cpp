#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<pair<pair<ll,ll>,ll>> arr;

    for(ll i = 0;i < n;i ++){
        ll x,y;
        cin>>x>>y;

        arr.push_back({{x,y},i});
    }


    sort(arr.begin(),arr.end());

    set<pair<ll,ll>> st;

    vector<ll> ans(n);

    ll end = arr[0].first.second;
    ll ind = arr[0].second;
    ans[ind] = 1;

    st.insert({arr[0].first.second,1});


    for(ll i = 1;i < n;i ++){
        ll end = (*st.begin()).first;
        ll room = (*st.begin()).second;
        ll total = st.size();

        ll start = arr[i].first.first;
        ll ind = arr[i].second;

        if(start > end){
            ans[ind] = room;
            st.erase(st.begin());
            st.insert({arr[i].first.second,room});
        }

        else{
            ans[ind] = total + 1;
            st.insert({arr[i].first.second,total + 1});

        }
    }


    cout<<st.size()<<endl;

    for(auto x : ans){
        cout<<x<<' ';
    }

    cout<<endl;

    


    

    

    
}
int main(){
    solve();
}