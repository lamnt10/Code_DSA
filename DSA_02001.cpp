#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        while (n){
            cout << "[";
            for(int i=0;i<n;i++){
                cout << a[i] ;
                if(i!=n-1) cout << " " ;
            }
            cout << "]" << endl;
            --n;
            for(int i=0;i<n;i++){
                a[i]=a[i]+a[i+1];
            }
        }
    }
}