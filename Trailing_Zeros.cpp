#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){// no. of times a factor appers in n factorial
    ll n;
    cin>>n;

    ll ans = 0;

    while(n){
        ans += (n / 5);

        n /= 5;
    }

    cout<<ans<<endl;
}
int main(){
    solve();
}