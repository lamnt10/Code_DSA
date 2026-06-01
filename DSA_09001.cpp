#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        vector<int> a[1005];
        int x , y;cin >> x >> y;
        while (y--){
            int n,m;cin >> n >> m ;
            a[n].push_back(m);
            a[m].push_back(n);
        }
        for (int i=1;i<=x;i++){
            cout << i << ": ";
            for (int g:a[i]){
                cout << g << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

}