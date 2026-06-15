#include <bits/stdc++.h>
using namespace std;
int n,a[105],ok=1;
void sinh(){
    int pos=n-1;
    while(pos>=1 && (a[pos] > a[pos+1])) pos--;
    if(pos<1) {
        ok=0;
        return;
    }
    int p=n;
    while(a[pos]>a[p]) p--;
    swap(a[pos] , a[p]);
    int l=pos+1;int r=n;
    while(l<r){
        swap(a[l],a[r]);
        l++;r--;
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        a[i]=i;
    }
    int cnt=1;
    while(ok){
        cout << cnt <<": " ;
        for(int i=1;i<=n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
        cnt++;
        sinh();
    }

}