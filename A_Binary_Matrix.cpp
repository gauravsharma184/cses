#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<string> arr;

    for(ll i = 0;i < n;i++){
        string s;
        cin>>s;

        arr.push_back(s);
    }

    ll x = 0,y = 0;

    for(ll i = 0;i < n;i ++){
        ll cnt1 = 0;
        for(ll j = 0;j < m;j ++){

            if(arr[i][j] == '1') cnt1++;

        }

        if(cnt1 % 2){
            x++;
        }
    }


    for(ll j = 0;j < m;j ++){
        ll cnt1 = 0;
        for(ll i = 0;i < n;i ++){
            if(arr[i][j] == '1') cnt1++;
        }

        if(cnt1 % 2){
            y++;
        }


    }


    cout<<max(x,y)<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}