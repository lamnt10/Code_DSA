#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n+1];
        for(int i=1;i<=n;i++) {
            cin >> a[i];
        }
        int l,r,ma=0,mi=1e9;
        for(int i=2;i<=n;i++){
            if(a[i]<a[i-1]) {
                l=i-1;
                break;
            }
        }
        for(int i=n-1;i>=1;i--){
            if(a[i]>a[i+1]){
                r=i+1;
                break;
            }
        }
        for(int i=l;i<=r;i++){
            if(a[i]>ma) ma=a[i];
            if(a[i]<mi) mi=a[i];
        }
        for(int i=1;i<l;i++){
            if(a[i]>mi){
                l=i;
                break;
            }
        }
        for(int i=n;i>r;i--){
            if(a[i]<ma){
                r=i;
                break;
            }
        }
        cout << l << " " << r << endl;
    }

}