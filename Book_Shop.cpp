#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> prices(n),pages(n);


    for(ll i = 0;i < n;i ++){
        cin>>prices[i];
    }

    for(ll i = 0;i < n;i ++){
        cin>>pages[i];
    }

    vector<ll> prev(x + 1, 0);

    vector<ll> curr(x + 1, 0);

    for(ll i = 1;i <= n;i ++){
        for(ll k = 1;k <= x;k ++){
            //picking the book
            if(k >= prices[i - 1]) curr[k] = max(curr[k], pages[i - 1] + prev[k - prices[i - 1]]);

            curr[k] = max(curr[k],prev[k]);
        }

        prev = curr;
    }

    cout<<curr[x]<<endl;
}
int main(){
    solve();
}