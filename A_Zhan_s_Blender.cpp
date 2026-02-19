#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,x,y;

    cin>>n>>x>>y;

    if(y >= x){
        cout<< (n/x) + (n % x != 0)<<endl;
    }

    else cout<<(n /y) + (n % y != 0) <<endl;

}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}