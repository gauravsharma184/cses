#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool f(ll a,ll b){
    
        ll case1 = 2*a - b;

        if(case1 % 3 == 0 && case1>=0){
            ll k = case1/3;

            a -= 2*k;
            b -=k;

            if(a >=0 && b>=0 && b == 2 * a) return true;
        }

        

        return false;
    
}

void solve(){
   ll a,b;

   cin>>a>>b;

   // if(k <= min(a,b)) ---> YES

   if(a == 0 && b == 0){
        cout<<"YES"<<endl;
        return;
   }


   if(a == 0 || b == 0){
        cout<<"NO"<<endl;
        return;
   }

   if(a == 2*b || b == 2*a){
        cout<<"YES"<<endl;

        return;
   }


   bool check1 = f(a,b);
   bool check2 = f(b,a);

   if(check1 || check2){
        cout<<"YES"<<endl;

        return;
   }



   

   cout<<"NO"<<endl;










   
}
int main(){
    ll t;
    cin>>t;

    while(t--){
        solve();
    }
}