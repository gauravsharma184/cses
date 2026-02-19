#include<bits/stdc++.h>
using namespace std;
#define ll long long

void f(vector<ll>& a){
    ll n = a.size();

    cout<<n<<endl;

    for(auto x : a){
        cout<<x<<' ';
    }

    cout<<endl;
}

void solve(){
    ll n;
    cin>>n;


    ll tsum = (n * (n + 1))/2;

    if(tsum % 2 == 0){
        ll set_sum = tsum / 2;

        // vector<ll> visited(n + 1,0);

        vector<ll> ans1,ans2;

        for(ll no = n;no>=1;no--){
            if(set_sum >= no){
                ans1.push_back(no);
                set_sum -= no;
            }

            else{
                ans2.push_back(no);
            }
        }

        cout<<"YES"<<endl;

        f(ans1);

        f(ans2);

        
    }

    else{

        cout<<"NO"<<endl;
    }
}
int main(){
    solve();
}