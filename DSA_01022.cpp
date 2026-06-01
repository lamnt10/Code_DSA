#include <bits/stdc++.h>
using namespace std;
long long giaithua(int x){
    long long kq=1;
    for(int i=1;i<=x;i++){
        kq*=i;
    }
    return kq;
}
int main(){
    int t; cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for(int &x:a) cin >> x;
        long long kq=1;
        bool used[n+1]={false};
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=1;j<a[i];j++){
                if(!used[j]) cnt++;
            } 
            kq+=cnt*giaithua(n-1-i);
            used[a[i]]=true;
        }
        cout << kq << endl;
    }
}