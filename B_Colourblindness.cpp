#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    string s,t;
    cin>>s>>t;

    ll cnt1 = 0;

    for(ll i = 0;i < n;i ++){
        if(s[i] == 'R'){
            if(t[i] == 'G' || t[i] == 'B'){
                cout<<"NO"<<endl;
                return;
            }
        }

        if(t[i] == 'R'){
            if(s[i] == 'G' || s[i] == 'B'){
                cout<<"NO"<<endl;
                return;
            }
        }
    }

    cout<<"YES"<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}