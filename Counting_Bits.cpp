#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    ll ans = 0;


    for(ll i = 1;i <= n;i ++){
        ll no = i;
        while(no){
            if((no & 1)){
                ans++;
            }

            no = no>>1;
        }
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}