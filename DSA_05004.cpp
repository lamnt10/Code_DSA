#include <bits/stdc++.h>
using namespace std;
using ll = long long ;

int main(){
    int n;cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int f[n]={1};
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[j]<a[i]){
                f[i]=max(f[i],f[j]+1);
            }

        }
    }
    int maxx=0;
    for(int i=0;i<n;i++){
        maxx=max(maxx,f[i]);
    }
    cout << maxx << endl;

}