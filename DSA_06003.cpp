#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for(int &x:a) cin >> x ;
        int ans=0;
        for(int i=0;i<n-1;i++){
            int k=i;
            for(int j=i+1;j<n;j++){
                if(a[j]<a[k]) k=j;
            }
            if(k!=i) ans++;
            swap(a[k],a[i]);
        }
        cout << ans << endl;
    }
}