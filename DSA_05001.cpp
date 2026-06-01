#include <bits/stdc++.h>
using namespace std;
int main(){
    int tc ; cin >> tc;
    while(tc--){
        string s,t ; cin >> s >> t;
        int n=s.length(),m=t.length();
        int F[n+1][m+1];
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                F[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1]) F[i][j]=F[i-1][j-1]+1;
                else {
                    F[i][j]=max(F[i-1][j],F[i][j-1]);
                }
            }
        }
        cout << F[n][m] << endl;
    }
}