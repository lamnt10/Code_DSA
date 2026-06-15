#include <bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[105],b[105];
void sinh(){
    int pos=n-1;
    while(pos>=0 && b[pos]==1){
        b[pos]=0;
        pos--;
    }
    if(pos<0) ok=0;
    else b[pos]=1;
}
bool check(){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(b[i]) cnt+=a[i];
    }
    return cnt==k;
}
int main(){
    cin >> n >> k;
    for(int i=0;i<n;i++) cin >> a[i];
    int cnt=0;
    while(ok){
        if(check()){
            cnt++;
            for(int i=0;i<n;i++){
                if(b[i]) cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh();
    }
    cout << cnt << endl;
}