#include<bits/stdc++.h>
using namespace std;
int a[10005];
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        for(int i=0;i<n;i++){
            int x;cin >> x;
            a[x]++;
        }
        for(int i=0;i<10000;i++){
            if(a[i]!=0){
                for(int j=1;j<=a[i];j++){
                    cout << i << " ";
                }
            }
        }
        cout << endl;
        memset(a,0,sizeof(a));
    }
}