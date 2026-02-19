#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    string s;
    cin>>s;

    ll n = s.size();


    sort(s.begin(),s.end());

    cout<<s<<endl;


    ll i = 0, j =0;

    for(ll i = 0;i < n - 1;i ++){
        if(s[i] == s[i + 1]){
            j = max(i+1, j);

            while(j < n && s[i] == s[j]) j++;

            if(j < n) swap(s[i+1],s[j]);
        }
    }


    for(ll i =0;i < n - 1;i ++){
        if(s[i] == s[i + 1]){
            cout<<-1<<endl;
            return;
        }
    }

    cout<<s<<endl;
}
int main(){
    solve();
}