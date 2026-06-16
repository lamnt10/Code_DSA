#include <bits/stdc++.h>
using namespace std;
int t,n,ok=1;
int a[105];
void sinh(){
    int pos=n;
    while(pos>=1&& a[pos]==1){
        a[pos]=0;
        pos--;
    }
    if(pos<1) {
        ok=0;
        return;
    }
    else a[pos]=1;
}
bool check(){
    if(a[1]!=1 || a[n]!=0) return false;
    for(int i=2;i<=n;i++){
        if((a[i] == a[i-1]) && a[i]==1) return false;
    }
    return true;
}
void sinh(int pos){
    if(pos>n){
            for(int i=1;i<=n;i++){
                if(a[i]) cout << 'H';
                else cout << 'A';
            }
            cout << endl;
        return;
    }
    if(pos==1) {
        a[pos]=1;
        sinh(pos+1);
    }
    else if(pos==n){
        a[pos]=0;
        sinh(pos+1);
    }
    else{
        for(int i=0;i<=1;i++){
            a[pos]=i;
            if(a[pos-1]==1 && a[pos]==1) return ;
            sinh(pos+1);
        }
    }
}
int main(){
    cin >> t;
    while(t--){
        cin>> n;
        for(int i=1;i<=n;i++){
            a[i]=0;
        }
        // while(ok){
        //     if(check()){
        //         for(int i=1;i<=n;i++){
        //             if(a[i]==0) cout << 'A';
        //             else cout << 'H';
        //         }
        //         cout << endl;
        //     }
        //     sinh();
        // }
        // ok=1;
        sinh(1);
    }
}