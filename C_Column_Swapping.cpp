#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(vector<vector<ll>>& arr,ll n,ll m){
    for(ll i = 0;i < n;i ++){
        for(ll j = 0;j < m - 1;j ++){
            if(arr[i][j] > arr[i][j + 1]){
                return false;
            }
        }
    }

    return true;
}

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<vector<ll>> arr(n,vector<ll>(m));

    for(ll i = 0;i < n;i ++){
        for(ll j = 0;j < m;j ++){
            cin>>arr[i][j];
        }
    }


    if(check(arr,n,m)){
        cout<<1<<' '<<1<<endl;
        return;
    }

    vector<ll> temp;

    ll ind;

    for(ll i = 0;i < n;i ++){
        for(ll j = 0;j < m - 1;j ++){
            if(arr[i][j] > arr[i][j + 1]){
                ind = i;
                temp = arr[i];
                break;
            }
        }
    }

    sort(temp.begin(),temp.end());

    ll cnt = 0;
    vector<ll> v;

    for(ll j = 0;j < m;j ++){
        if(arr[ind][j] != temp[j]){
            cnt++;

            v.push_back(j);
        }
    }

    if(cnt > 2){
        cout<<-1<<endl;
    }

    else{
        
        ll l = v[0],r = v[1];

        for(ll i = 0;i < n;i ++){
            swap(arr[i][l],arr[i][r]);
        }

        if(check(arr,n,m)){
            cout<<l + 1<<' '<<r + 1<<endl;
        }

        else cout<<-1<<endl;


    }

        
    




}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}