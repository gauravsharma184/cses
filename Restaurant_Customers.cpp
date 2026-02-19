#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    vector<ll> s(n),c(n);

    for(ll i = 0;i < n;i ++){
        cin>>s[i]>>c[i];
    }

    vector<pair<ll,ll>> arr;

    for(ll i = 0;i < n;i ++){
        arr.push_back({s[i],1});
        arr.push_back({c[i],-1});
    }

    ll ans = 0,max_ans = 0;

    sort(arr.begin(),arr.end());


    for(auto [x,y] : arr){
        ans += y;

        max_ans = max(max_ans,ans);

        
    }

    cout<<max_ans<<endl;


}
int main(){
    solve();
}