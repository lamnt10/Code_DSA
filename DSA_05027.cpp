#include <bits/stdc++.h>
using namespace std;
int F[1005][1005];
int n,V,w[1005],v[1005];
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> V;
        for(int i=1;i<=n;i++){
            cin >> w[i];
        }
        for(int i=1;i<=n;i++){
            cin >> v[i];
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=V;j++){
                F[i][j]=F[i-1][j];
                if(j>=w[i]) {
                    F[i][j]=max(F[i][j],F[i-1][j-w[i]]+v[i]);
                }
            }
        }
        cout << F[n][V] << endl;
    }
}