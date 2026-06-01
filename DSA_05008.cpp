#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n,s;cin >> n >> s;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int F[s+1]={0};
        F[0]=1;
        for(int i=0;i<n;i++){
            for(int j=s;j>=i;j--){
                if(F[j-a[i]]==1) F[j]=1;
            }
        }
        if(F[s]==1) cout << "YES";
        else cout<< "NO";
        cout << endl;
   }
}