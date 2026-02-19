#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll a,b,c;
    cin>>a>>b>>c;

    ll t = a+b+c;

    if(t % 3 != 0){
        cout<<"NO"<<endl;
    }

    else if(a>t/3 || b >t/3){
        cout<<"NO"<<endl;
    }

    else cout<<"YES"<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}