#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n,k;cin >> n >> k;
        int a[k];set<int> s;
        for(int i=0;i<k;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int cnt1=s.size();
        int pos=0;int j=k-1;
        for(j=k-1;j>=0;j--){
            if(a[j]<n-k+j+1) {
                pos=j;break;
            }
        }
        if(j<0){
            cout << k << endl;
            continue;
        }
        
        int b[k]={};
        for(int i=0;i<pos;i++){
            b[i]=a[i];
        }
        b[pos]=a[pos]+1;s.insert(b[pos]);
        for(int i=pos+1;i<k;i++){
            b[i]=b[i-1]+1;
            s.insert(b[i]);
        }
        cout << s.size() - cnt1 << endl;

    }
}