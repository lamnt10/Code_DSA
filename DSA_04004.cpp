#include <bits/stdc++.h>
using namespace std;
long long mul(int x){
    if(x==0) return 1;
    if(x==1) return 2;
    long long y=mul(x/2);
    if(x%2==0) return y*y;
    else return y*y*2;
}
int main(){
    int t; cin >> t;
    while (t--){
        long long n,k;cin >> n >> k;
        while (n>0){
            long long mid = mul(n)/2;
            if(n==1) {
                cout << 1 << endl;
                break;
            }
            if (mid == k) {
                cout << n <<endl;
                break;
            }
            if(k>mid){
                k=mid-(k-mid);
            }
            n--;
        }
    }
}