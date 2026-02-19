#include<bits/stdc++.h>
using namespace std;
#define ll long long


bool check(vector<ll>& freq){
    ll cnt = 0;

    for(auto x : freq){
        if(x % 2) cnt++;
    }

    return cnt<=1;
}

void solve(){
    string s;
    cin>>s;


    vector<ll> freq(26,0);


    for(char c : s){
        freq[c - 'A']++;
    }

    bool f = check(freq);

    if(!f){
        cout<<"NO SOLUTION"<<endl;
    }

    else{
        ll n = s.size();

        string ans;

        ans.resize(n);

        ll i = 0, j = n - 1;

        char x = 'z';

        for(ll k = 0;k < 26;k ++){
            char c = 'A' + k;


            while(freq[k] > 0){
                ans[i] = c;
                ans[j] = c;
                i++;
                j--;

                freq[k] -= 2;
            }


            if(freq[k]) x = c;

            

            
        }


        if(n % 2) ans[i] = x;

        cout<<ans<<endl;


    }

    
}
int main(){
    solve();
}