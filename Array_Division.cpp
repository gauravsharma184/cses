#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<ll>& a,ll check_sum,ll k){
    ll n = a.size();

    ll sub = 1, sum = 0;

    for(ll i = 0;i < n;i ++){
        if(sum + a[i] > check_sum){
            sub++;
            sum = a[i];
        }

        else sum += a[i];
    }

    return sub <= k;
}

void solve(){
    ll n,k;
    cin>>n>>k;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll tsum = accumulate(a.begin(),a.end(),0LL);

    ll maxi = *(max_element(a.begin(),a.end()));

    ll low = maxi, high = tsum;

    ll ans = 1e16;

    while(low <= high){
        ll mid = low + (high - low)/2;

        if(check(a,mid,k)){
            ans = min(ans,mid);
            high = mid - 1;
        }

        else low = mid + 1;
    }


    cout<<ans<<endl;


}
int main(){
    solve();
}