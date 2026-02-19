#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n,k;
    cin>>n>>k;


    if(n <= 60 && k > 1LL<<(n - 1)){
        cout<<-1<<endl;
        return;
    }


    ll size = n,ele = 1,i = 0,j = n - 1;

    vector<ll> ans(n);


    while(size > 0){

        if(size <= 60 && k > (1LL << size - 2)){
            k -= (1LL<<size - 2);
            ans[j] = ele;
            j--;
        }

        else{
            ans[i] = ele;
            i++;
        }

        size--;
        ele++;
    }


    for(auto x : ans){
        cout<<x<<' ';
    }

    cout<<endl;

    cout<<__algo_gcd(10,13)<<endl;



    


}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}