#include<bits/stdc++.h>
using namespace std;
int a[1005];
int n;
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int check=1;
        for(int i=1;i<n;i++){
            if(a[i]<=a[i-1]){
                cout << 0 << endl;
                check=0;
                break;
            }
        }
        if(check) cout << 1 << endl;
    }
}