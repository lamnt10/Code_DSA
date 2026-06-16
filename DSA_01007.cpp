#include <bits/stdc++.h>
using namespace std;
int t,n;
int a[105];
int ok=1;
void sinh(){
    int pos=n;
    while(pos>=1 && a[pos]==1) {
        a[pos]=0;
        pos--;
    }
    if(pos>=1) a[pos]=1;
    else ok=0;
}
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1;i<=n;i++){
            a[i]=0;
        }
        while(ok){
            for(int i=1;i<=n;i++){
                if(a[i]==0) cout << 'A';
                else cout << 'B';
            }
            cout << " ";
            sinh();
        }
        cout << endl;
        ok=1;
    }
}