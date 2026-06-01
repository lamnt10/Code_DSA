#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n,k;
ll mod =1e9+7;
long long luythua(ll n,ll k){
    if(k==0) return 1;
    ll x=luythua(n,k/2)%mod;
    if(k%2==0) return (x*x)%(mod);
    else return (x*x%mod)*(n%mod)%(mod);
}
int main(){
    int t;cin >> t;
    while (t--){
       cin >> n >> k;
       long long kq;
       kq=luythua(n,k);
       cout << kq << endl;
    }
}