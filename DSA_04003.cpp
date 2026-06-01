#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 123456789;
ll luythua(ll n,ll k){
    if(k==0) return 1;
    ll x=luythua(n,k/2);
    ll tmp=(x*x)%mod;
    if(k%2==0) return tmp;
    else return (tmp*(n%mod))%mod;
}
int main(){
    int t;cin >> t;
    while (t--){
        ll n;cin >> n;
        ll kq;
        kq=luythua(2,n-1);
        cout << kq << endl;            
    }
}