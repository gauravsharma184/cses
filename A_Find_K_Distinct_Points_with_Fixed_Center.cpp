#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll xc,yc,k;

    cin>>xc>>yc>>k;

    vector<ll> y;

    if(k % 2 == 0){
        y.push_back(k * yc - 1e7);
        y.push_back(1e7);

        ll cnt = 1;

        while(y.size() < k){
            y.push_back(cnt);
            y.push_back(-cnt);
            cnt++;
        }
    }

    else{
        ll check = k * yc;

        y.push_back(k * yc);

        ll count = 1;

        while(y.size() < k - 1){
            if(count == k * yc) count++;

            y.push_back(count);
            y.push_back(-count);

            count++;
        }
    }

    for(ll i = 0;i < k;i ++){
        cout<<xc<<' '<<y[i]<<endl;
    }

    // cout<<endl;


}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}