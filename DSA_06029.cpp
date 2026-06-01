#include <bits/stdc++.h>
using namespace std;
int main(){
        int n;cin >> n ;
        int a[n];
        for(int &x:a) cin >> x;
        vector<int> b[105];
        for(int i=0;i<n;i++){
            int x=a[i];int pos=i-1;
            while(pos>=0 && x<a[pos]){
                a[pos+1]=a[pos];
                pos--;
            }
            a[pos+1]=x;
            for(int j=0;j<=i;j++){
                b[i].push_back(a[j]);
            }
        }
        for(int i=n-1;i>=0;i--){
            cout << "Buoc " << i << ": ";
            for(int x:b[i]) cout << x << " ";
            cout << endl;
        }
}