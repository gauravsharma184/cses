#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    sort(a.begin(),a.end());


    if(a[0] != 1){
        cout<<1<<endl;
    }

    else{
        ll sum = 0;
        for(ll i = 0;i < n;i ++){
            if(a[i] > sum + 1){
                cout<<sum + 1<<endl;
                return;
            }

            sum += a[i];


        }

        cout<<sum + 1<<endl;
    }



}
int main(){
    solve();
}