#include<bits/stdc++.h>
using namespace std;
#define ll long long



ll f(vector<ll>& a, ll n, ll len){

    ll i = 0, j = len - 1;


    ll sum = 0;

    for(ll k = 0;k <= j;k ++) sum += a[k];

    ll max_sum = sum;

    while(j < n){
        max_sum = max(sum,max_sum);
        sum -= a[i];
        i++;
        j++;
        sum += a[j];
    }


    return max_sum;


}


void solve(){
    ll n,a,b;

    cin>>n>>a>>b;

    vector<ll> arr(n);

    for(ll i = 0;i < n;i ++) cin>>arr[i];


    ll sum = 0, max_sum = arr[0],start = 0,len = 0;


    for(ll i = 0;i < n;i ++){
        sum += arr[i];

        
        if(sum >= max_sum){
            max_sum = max(sum,max_sum);

            len = i - start + 1;
        }


        if(sum < 0){
            sum = 0;
            start = i + 1;
        }


    }

    // cout<<len<<endl;

    if(len >= a && len <= b){
        cout<<max_sum<<endl;

        return;
    }

    ll op1 = f(arr,n,a);

    ll op2 = f(arr,n,b);

    cout<<max(op1, op2)<<endl;

    

    
}
int main(){
    solve();
}