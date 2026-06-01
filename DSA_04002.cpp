#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1e9 + 7;
ll luythua(ll n , ll r){
    if (r==0) return 1;
    ll x=luythua(n,r/2);
    ll tmp=(x*x)%mod;
    if(r%2==0) return tmp;
    else return (tmp*n)%mod;
}
int main(){
    int t;cin >> t;
    while (t--){
        ll n;cin >> n;
        ll tmp=n;
        ll r=0;
        while (tmp>0){
            ll x=tmp%10;
            r=r*10+x;
            tmp/=10;
        }
        ll kq;
        kq=luythua(n,r);
        cout << kq << endl;
    }
}