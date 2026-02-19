#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    

    for(ll i = 0;i < n;i ++){
        cin>>a[i];
    }



    ll flag = 0, ans = 0, maxi1 = 0, maxi2 = 0;
    map<ll,ll> mp;

    for(ll i = 0;i < n; i ++){
        mp[a[i]]++;
    }

    

    ll cnt1 = 0,cnt2 = 0;

    for(auto [x,y] : mp){
        if(y >= 2){
            cnt2 += 2;
        }

        else if(y == 1){
            cnt1++;
        }
    }

    ll k = cnt1 + cnt2;

    cout<<(k + 1)/2<<endl;

    
    
    
    

   

    
    




}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}