#include <bits/stdc++.h>
using namespace std ;
int c[20][20];
void ktao(){
    for(int i=0;i<20;i++){
        c[i][0]=1;
        for(int j=1;j<=i;j++){
            c[i][j]=c[i-1][j-1]+c[i-1][j];
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        int n,k;cin >> n >> k;
        int a[n+1];
        ktao();
        a[0]=0;
        for(int i=1;i<=k;i++) cin >> a[i];
        int kq=1;
        for(int i=1;i<=k;i++){
            for(int j=a[i-1]+1;j<a[i];j++){
                kq+=c[n-j][k-i];
            }
        }
        cout << kq << endl;
    }
}