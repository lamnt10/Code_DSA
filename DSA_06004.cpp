#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n,m;cin >> n >> m;
        int a[n],b[m];
        set<int> s;
        for(int i=0;i<n;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        for(int i=0;i<m;i++){
            cin >> b[i];
            s.insert(b[i]);
        }
        int i=0,j=0;
        vector<int> v;
        while (i<n && j<m){
            if(a[i]>b[j]) j++;
            else if(a[i]<b[j]) i++;
            else{
                
                v.push_back(a[i]);
                i++,j++;
        }
        }
        for(int x:s) cout << x<< " ";
        cout << endl;
        for(int x:v) cout << x <<" ";
        cout << endl;
    }

}