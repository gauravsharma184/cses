#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin>>n;

    string s,t;
    cin>>s>>t;

    sort(s.begin(),s.end());

    sort(t.begin(),t.end());

    if(s == t){
        cout<<"YES"<<endl;
    }

    else cout<<"NO"<<endl;
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}