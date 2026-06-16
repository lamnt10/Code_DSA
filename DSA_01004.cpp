#include <bits/stdc++.h>
using namespace std;
int t,n,k,ok=1;
int a[105];
void sinh(){
    int pos=k;
    while(pos>=1 && a[pos]==n-k+pos) pos--;
    if(pos<1) {
        ok=0;
        return;
    }
    a[pos]++;
    for(int i=pos+1;i<=k;i++){
        a[i]=a[i-1]+1;
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n>> k;
        for(int i=1;i<=k;i++){
            a[i]=i;
        }
        while(ok){
            for(int i=1;i<=k;i++){
                cout << a[i];
            }
            cout << " ";
            sinh();
        }
        cout << endl;
        ok=1;
    }
}