#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);


    for(ll i = 0;i < n;i ++) cin>>a[i];


    ll sum = 0, max_sum = a[0];

    for(ll i = 0;i < n;i ++){
        sum += a[i];

        max_sum = max(max_sum,sum);

        if(sum < 0) sum = 0;
    }

    cout<<max_sum<<endl;
}
int main(){
    solve();
}