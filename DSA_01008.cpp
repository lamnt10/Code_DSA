#include <bits/stdc++.h>
using namespace std;
int t,n,k,ok=1;
int a[105];
// void sinh(){
//     int pos=n;
//     while(pos>=1 && a[pos]==1){
//         a[pos]=0;
//         pos--;
//     }
//     if(pos>=1) a[pos]=1;
//     else ok=0;
// }
// bool check(){
//     int cnt=0;
//     for(int i=1;i<=n;i++){
//         if(a[i]) cnt++;
//     }
//     return cnt==k;
// }
void sinh(int pos,int cnt){
    if(pos>n){
        if(cnt==k){
            for(int i=1;i<=n;i++){
                cout << a[i];
            }
            cout << endl;
        }
        return;
    }
    for(int i=0;i<=1;i++){
        a[pos]=i;
        sinh(pos+1,cnt+i);
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        // for(int i=1;i<=n;i++){
        //     a[i]=0;
        // }
        // while(ok){
        //     if(check()){
        //         for(int i=1;i<=n;i++){
        //             cout << a[i];
        //         }
        //         cout << endl;
        //     }
        //     sinh();
        // }
        // ok=1;       
        sinh(1,0);
    }
}