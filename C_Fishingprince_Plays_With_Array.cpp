#include<bits/stdc++.h>
using namespace std;
#define ll long long

void f(vector<pair<ll,ll>>& arr,vector<ll>& a,ll m){
    ll n = a.size();


    for(ll i = 0;i < n;i ++){
        ll temp = a[i];

        ll pr = 1;

        while(temp > 0 && temp % m == 0){
            pr *= m;
            temp /= m;
        }

        

        if(i > 0 && temp == (arr.back()).first){
            (arr.back()).second += pr;
        }

        else arr.push_back({temp,pr});

        
    }
}

void printarr(vector<pair<ll,ll>>& arr){
    ll n = arr.size();

    for(auto [x,y] : arr){
        cout<<x<<' '<<y<<endl;
    }

    cout<<endl;
}

void solve(){
    ll n,m;
    cin>>n>>m;

    vector<ll> a(n);

    for(ll i = 0;i < n;i ++) cin>>a[i];

    ll k;
    cin>>k;

    vector<ll> b(k);


    for(ll i = 0;i < k;i ++){
        cin>>b[i];
    }

    vector<pair<ll,ll>> arr1,arr2;

    f(arr1,a,m);

    f(arr2,b,m);

    // printarr(arr1);
    // printarr(arr2);


    if(arr1 == arr2){
        cout<<"Yes"<<endl;
    }

    else cout<<"No"<<endl;



}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}