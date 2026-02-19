#include<bits/stdc++.h>
using namespace std;
#define ll long long






bool check(ll n){
    while(n > 0){
        ll digit = n % 10;

        if(digit == 7) return true;

        n = n / 10;
    }

    return false;
}

void solve(){

    ll n;
    cin>>n;

    ll ans = 10;

    for(ll now = 9;now < 1000000000; now = now*10 + 9){
        ll cnt = 0;

        ll m = n;

        while(!check(m)){
            m += now;
            cnt++;
        }

        ans = min(ans,cnt);


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