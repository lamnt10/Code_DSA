#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
ll a[1005][1005];
ll mod = 1000000007;
int main(){
    int t;cin >> t;
    for(int i=0;i<1005;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j) a[i][j]=1;
            else a[i][j]=(a[i-1][j-1]+a[i-1][j])% mod;
        }
    }
    while (t--){
        int n,k;cin >> n >> k;
        cout << a[n][k] << endl;
    }
}