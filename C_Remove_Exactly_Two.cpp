#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check(vector<ll>& a,ll max_node){
    for(auto x : a){
        if(x == max_node) return false;
    }

    return true;
}

void solve(){
    ll n;
    cin>>n;

    vector<vector<ll>> adj(n + 1);
    
    for(ll i = 0;i < n - 1;i++){
        ll u,v;

        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    ll maxi = 0,smaxi = 0;
    ll max_node;

    for(ll i = 1;i <= n;i++){
        ll m = adj[i].size();

        if(m >= maxi){
            smaxi = maxi;
            maxi = m;
            max_node = i;
        }

        else if(m > smaxi){
            smaxi = m;
        }
    }

    // cout<<maxi<<' '<<smaxi<<endl;


    vector<ll> nodes;

    for(ll i = 1;i <= n;i ++){
        ll m = adj[i].size();

        if(i != max_node && m == smaxi) nodes.push_back(i);
    }

    ll ans = 0,node1 = max_node,node2 = nodes[0];

    for(ll i = 1;i <= n;i ++){
        if(i == node1) continue;
        ll m = adj[i].size();

        if(check(adj[i],max_node)){
            ans = max(maxi + m - 1,ans);
        }

        else ans = max(ans,maxi + m - 2);

        
    }

    for(ll i = 1;i <= n;i ++){
        if(i == node2) continue;

        ll m = adj[i].size();


        if(check(adj[i],node2)){
            ans = max(smaxi + m - 1,ans);
        }

        else ans = max(ans,smaxi + m - 2);



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