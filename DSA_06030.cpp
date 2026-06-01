#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for(int &x:a) cin >> x;
        vector<int> b[105];
        int cnt=0;
        for(int i=0;i<n-1;i++){
            int check=0;
            for(int j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]) {
                    check=1;
                    swap(a[j],a[j+1]);
                }
            }
            if(check==0) break;
            cnt++;
            for(int j=0;j<n;j++){
                b[i].push_back(a[j]);
            }
        }
        for(int i=cnt;i>=1;i--){
            cout << "Buoc " << i << ": ";
            for(int x:b[i-1]) cout << x << " ";
            cout << endl;
        }
    }
}