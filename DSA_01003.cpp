#include <bits/stdc++.h>
using namespace std;
int t,n;
int a[1005];
void sinh(){
    int pos=n-1;
    while(pos>=1 && a[pos]>a[pos+1]){
        pos--;
    }
    if(pos<1){
        for(int i=1;i<=n;i++){
            cout << i << " ";
        }
        cout << endl;
        return ;
    }
    int p=n;
    while(a[p]<a[pos]) p--;
    swap(a[p],a[pos]);
    int l=pos+1,r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;r--;
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
int main(){
    cin >>t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sinh();
    }
}