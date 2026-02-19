#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<pair<ll,ll>> arr;


    for(ll i = 0;i < n;i ++){
        ll x,y;
        cin>>x>>y;

        arr.push_back({x,y});
    }


    sort(arr.begin(),arr.end());


    auto [s,e] = arr[0];
    ll ans = 1;

    for(ll i = 1;i < n;i ++){

        if(arr[i].first < e){
            if(arr[i].second < e){
                s = arr[i].first;
                e = arr[i].second;
            }
        }

        else{
            ans++;
            s = arr[i].first;
            e = arr[i].second;
        }
    }


    cout<<ans<<endl;


    



}
int main(){
    solve();
}