#include <bits/stdc++.h>
using namespace std;
int t,n,k;
int a[1005];
int main(){
    cin >> t;
    while(t--){
        cin >> n>> k;
        for(int i=1;i<=k;i++){
            cin >> a[i];
        }
        int pos=k;
        while(pos>=1 && a[pos]==n-k+pos){
            pos--;
        }
        if(pos<1){
            for(int i=1;i<=k;i++){
                cout << i << " ";
            }
            cout << endl;
            continue;
        }
        a[pos]++;pos+=1;
        while(pos<=k){
            a[pos]=a[pos-1]+1;
            pos++;
        }
        for(int i=1;i<=k;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}