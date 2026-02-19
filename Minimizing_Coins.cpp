#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x;
    cin>>n>>x;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];


    

    vector<ll> prev(x + 1, 1e15);
    prev[0] = 0;
    vector<ll> curr(x + 1,1e15);
    curr[0] = 0;

    for(ll i = 1;i <= n;i ++){
        for(ll sum = 1; sum <= x; sum ++){
            if(sum >= a[i - 1]){
                curr[sum] = min(curr[sum],1 + curr[sum - a[i - 1]]);
            }

            curr[sum] = min(curr[sum],prev[sum]);
        }

        prev = curr;
    }


    prev[x] == 1e15 ? cout<<-1<<endl:cout<<prev[x]<<endl;



    
}
int main(){
    solve();
}