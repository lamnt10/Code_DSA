#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[105];
int x[105];
int ok;
void in(int i){
    ok=1;
    cout << "[";
    for(int j=1;j<i;j++){
        cout << x[j] << " ";
    }
    cout << x[i] <<"]";
}
void Try(int i,int sum,int pre){
    for(int j=pre;j<=n;j++){
        if(sum+a[j]>k) continue;
        x[i]=a[j];
        if(sum+a[j]==k) in(i);
        else Try(i+1,sum+a[j],j);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        ok=0;
        Try(1,0,1);
        if(ok==0) cout << -1;
        cout << endl;
    }
}