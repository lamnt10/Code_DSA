#include <bits/stdc++.h>
using namespace std;
int t,n,ok=1;
int a[105];
void sinh(){
    int pos=n-1;
    while(pos>=1 && a[pos]>a[pos+1]) pos--;
    if(pos<1){
        ok=0;
        return;
    }
    int pw=n;
    while(a[pw]<a[pos]) pw--;
    swap(a[pw],a[pos]);
    int l=pos+1,r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;r--;
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
        a[i]=i;
    }
    while(ok){
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << " ";
        sinh();
    }
    cout << endl;
    ok=1;
    }

}