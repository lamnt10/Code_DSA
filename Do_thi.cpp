#include<bits/stdc++.h>
using namespace std;
vector <int> ke[1005];
int main(){
    int n,m; cin >> n >> m;
    for (int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for (int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
        cout << i << " : ";
        for (int j=0;j<ke[i].size();j++){
            cout << ke[i][j] <<  " ";
        }
        cout << endl;
    }
    return 0;
}