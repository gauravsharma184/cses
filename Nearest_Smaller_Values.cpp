#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);
    

    for(ll i = 0;i < n;i ++) cin>>a[i];


    stack<ll> st;

    vector<ll> ans;


    for(ll i = 0;i < n;i ++){
        while(!st.empty() && a[st.top()] >= a[i]){
            st.pop();
        }

        if(st.empty()) ans.push_back(0);
        else ans.push_back(st.top() + 1);

        st.push(i);
    }


    for(auto x : ans){
        cout<<x<<' ';
    }

    cout<<endl;
}
int main(){
    solve();
}