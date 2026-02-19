#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){

    ll n;
    cin>>n;
    string s;
    cin>>s;

    ll j = n-1;


    while(j >= 0 && s[j] == '1') j--;

    ll ans = j == n - 1 ? 0 : 1;

    while(j >= 0){
        while(j >= 0 && s[j] == '0') j--;

        if(j < 0) break;

        while(j >= 0 && s[j] == '1') j--;

        ans += 2;
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