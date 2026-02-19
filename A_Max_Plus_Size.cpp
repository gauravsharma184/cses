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

    ll maxie = 0, maxiod = 0;

    for(ll i = 0;i < n;i ++){
        if(i % 2 == 0){
            maxie = max(maxie,a[i]);
        }

        else maxiod = max(maxiod,a[i]);
    }


    ll op1 = maxie + (n + 1)/2;

    ll op2 = maxiod + (n / 2);

    cout<<max(op1,op2)<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}