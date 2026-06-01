#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
ll a[2][2], b[2][2];
ll mod = 1e9+7;
void ktao(){
    a[0][0]=1;a[1][1]=0;
    a[1][0]=1;a[0][1]=1;
    b[0][0]=1;b[1][1]=0;
    b[1][0]=1;b[0][1]=1;
}
void mul(ll a[2][2],ll b[2][2]){
   ll x=(a[0][0]*b[0][0]%mod + a[0][1]*b[1][0]%mod)%mod;
   ll y=(a[0][0]*b[0][1]%mod + a[0][1]*b[1][1]%mod)%mod;
   ll z=(a[1][0]*b[0][0]%mod + a[1][1]*b[1][0]%mod)%mod;
    ll t= (a[1][0]*b[0][1]%mod + a[1][1]*b[1][1]%mod)%mod;
        a[0][0]=x;a[1][1]=t;
    a[1][0]=z;a[0][1]=y;
}
void power(ll a[2][2],ll n){
    if(n<=1) return ;
    power(a,n/2);
    mul(a,a);
    if(n%2==1) mul(a,b);
}
int main(){
    int t;cin >> t;
    while (t--){
        cin >> n;
        ktao();
        if(n==0) cout << 0 << endl;
        else {
            power(a,n-1);
            cout << a[0][0] << endl;
        }
    }
}