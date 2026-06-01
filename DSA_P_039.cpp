#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n ;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin >> a[i][j];
            }
        }
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                a[i][j]=max(a[i][j],a[i][j-1]);
            }
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i][n-1];
        }
        cout << sum << endl;
    }
}