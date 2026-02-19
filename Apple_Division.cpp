#include<bits/stdc++.h>
using namespace std;
#define ll long long



void f(vector<ll>& a,ll n,ll sum,ll& tsum,ll& ans,ll i){
    if(i == n){
        ans = min(ans, abs(tsum - 2 * sum));
        return;
    }


    sum += a[i];

    f(a,n,sum,tsum,ans,i + 1);

    sum -= a[i];

    f(a,n,sum,tsum,ans,i + 1);
}



void solve(){
    ll n;
    cin>>n;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll tsum = 0;

    for(ll i = 0;i < n;i ++) tsum += a[i];

    ll ans = tsum;


    f(a,n,0,tsum,ans,0);

    cout<<ans<<endl;













}
int main(){
    solve();
}