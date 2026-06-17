#include<bits/stdc++.h>
using namespace std;
int a[11],x[11];
int n,k,ok=0;
void print(int m){
    ok=1;
    cout << "[";
    for(int i=1;i<m;i++) cout << x[i] << " ";
    cout << x[m] << "] ";     
}
void Try(int i,int sum,int pre){
    for(int j=pre+1;j<=n;j++){
        if(sum+a[j]>k) continue;
        x[i]=a[j];
        if(sum+a[j]==k) print(i);
        else Try(i+1,sum+a[j],j);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >>k;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1);
        ok=0;
        Try(1,0,0);
        if(!ok) cout << "-1";
        cout << endl;
    }
}