#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    unordered_map<ll,ll> mp;


    for(ll i = 0;i < n;i ++){
        ll sum = x - a[i];

        

        for(ll j = i + 1;j < n;j ++){
            ll req = sum - a[j];

            if(mp.find(req) != mp.end()){
                cout<<i + 1<<' '<<mp[req] + 1<<' '<<j + 1<<endl;
                return;
            }

            mp[a[j]] = j;
        }

        mp.clear();

    }

    cout<<"IMPOSSIBLE"<<endl;







}
int main(){
    solve();
}