#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,b,c;

    cin>>n>>b>>c;

    if(n == 1){
        c > 0 ? cout<<1<<endl : cout<<0<<endl;
        return;
    }

    if(b == 0){
        if(c >= n){
            cout<<n<<endl;
        }

       else if(c == n - 1 || c == n - 2){
            cout<<n - 1<<endl;
       }

       else{
            cout<<-1<<endl;
       }

       return;
    }

    if(c >= n){
        cout<<n<<endl;
        return;
    }

    ll lb = max(1LL,1 - (c/b));

    ll ub = (n - 1 - c)/b + 1;

    // cout<<ub<<' '<<lb<<endl;

    ll present = ub - lb + 1;

    ll ans = n - present;

    cout<<ans<<endl;

    

}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}