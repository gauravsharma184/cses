#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<vector<ll>> a(n,vector<ll>(n));

    for(ll i = 0;i < n;i ++){
        for(ll j = 0;j < n;j ++){
            cin>>a[i][j];
        }
    }

    vector<ll> arr;

    for(ll i = 0;i < n;i ++){
        ll j = n - 1;

        while(j >= 0 && a[i][j] == 1){
            j--;
        }

        arr.push_back(n - 1 - j);
    }

    sort(arr.begin(),arr.end());

    ll ans = 0;

    ll i = 0;

    while(i < n){
        while(i < n && arr[i] < ans){
            i++;
        }

        if(i < n){
            ans++;
            i++;
        }
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