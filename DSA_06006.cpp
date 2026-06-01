#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        int b[3]={0};
        for(int i=0;i<n;i++){
            cin >> a[i];
            b[a[i]]++;
        }
        for(int i=0;i<=2;i++){
            for(int j=1;j<=b[i];j++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}