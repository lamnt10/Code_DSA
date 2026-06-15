#include <bits/stdc++.h>
using namespace std;
bool check(int a[],int n){
    string s,t;
    for(int i=0;i<n;i++){
        s+=a[i];
        t+=a[n-1-i];
    }
    if(s==t) return true;
    return false;
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=0;
    }
    for(int x:a) cout << x << " ";
    cout << endl;
    while(true){
        int pos=n-1;
        while(pos>=0 && a[pos]==1){
            pos--;
        }
        if(pos<0) {
            break;
        }
        a[pos]=1;
        for(int i=pos+1;i<n;i++){
            a[i]=0;
        }
        if(check(a,n)) {
            for(int i=0;i<n;i++) cout << a[i] << " ";
            cout << endl;
        }

    }
}