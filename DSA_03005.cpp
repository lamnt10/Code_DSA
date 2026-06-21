#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int mi=0,ma=0;
        sort(a,a+n);
        for(int i=0;i<k;i++) mi+=a[i];
        for(int j=k;j<n;j++) ma+=a[j];
        int x=0,y=0;
        for(int i=0;i<n-k;i++) x+=a[i];
        for(int j=n-k;j<n;j++) y+=a[j];
        cout << max(abs(mi-ma),abs(x-y)) << endl;
    }
}