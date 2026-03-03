#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll f(ll p) {
    ll pr = 1;

    for(ll i = 0;i < p;i ++) {
        pr *= 10;
    }

    return pr;
}
void solve(){
    ll q;
    cin>>q;

    while(q--) {
        ll k;
        cin>>k;

        ll size = 1, block = 9;
        while(k >= size * block) {
            k -= size * block;
            size ++;
            block *= 10;
        }

        ll rem = k % size;
        ll inc = k / size;

        if(rem == 0) {
            ll number = f(size - 1) + inc - 1;
            cout<<(number % 10)<<endl;
        }

        else {
            ll number = f(size - 1) + inc;
            // cout<<"number: "<<number<<endl;
            ll pos = size - rem + 1;
            // cout<<"pos: "<<pos<<endl;
            ll digit = 0;
            while(pos) {
                digit = number % 10;
                pos--;
                number /= 10;
            }
            cout<<digit<<endl;
        }
    }
}
int main(){
    solve();
}