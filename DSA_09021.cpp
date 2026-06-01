#include <bits/stdc++.h>
using namespace std;
int a[1005][1005];
vector<int> ke[1005];
int main(){
    int t;cin >> t;
    for (int i=1;i<=t;i++){
        for (int j=1;j<=t;j++){
            cin >> a[i][j];
        }
    }
    for (int i=1;i<=t;i++){
        for (int j=1;j<=t;j++){
            if (a[i][j]!=0){
                ke[i].push_back(j);
            }
        }
    }
    for (int i=1;i<=t;i++){
        for (int x:ke[i]) cout << x << " ";
        cout  << endl;
    }
}