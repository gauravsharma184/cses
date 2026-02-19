#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;


    vector<ll> arr = {0,6,28};


    if(n <= 3){
        for(ll i = 0;i < n;i ++){
            cout<<arr[i]<<endl;
        }
    }

    else{
        for(ll i = 0;i < 3; i ++){
            cout<<arr[i]<<endl;
        }


        for(ll k = 4;k <=n;k ++){
            ll x1 = 10 + max(0LL,(k - 4) * 4);

            ll x2 = 4 + max(0LL,(k - 4) * 2);

            // cout<<x1<<' '<<x2<<endl;

            ll ts = k * k;

            ll total = (ts * (ts- 1))/2;

            // cout<<total<<endl;

            ll ans = total - ((k - 2) * x1 + x2);

            cout<<ans<<endl;
        }
    }
}
int main(){
    solve();
}