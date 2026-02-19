#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    ll ans = 0;

    sort(a.begin(),a.end());

    ll i = 0, j = n - 1;

    while(i < j){
        if(a[i] + a[j] <= x){
            ans++;
            i++;
            j--;
        }

        else{
            ans++;
            j--;
        }
    }

    if(i == j) ans++;

    cout<<ans<<endl;
}
int main(){
    solve();
}