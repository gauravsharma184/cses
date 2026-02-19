#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b;
    cin>>a>>b;

    if(a >= b){
        cout<<a<<endl;
    }

    else cout<<max(0LL,2*a - b)<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}