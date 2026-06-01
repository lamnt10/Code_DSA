#include <bits/stdc++.h>
using namespace std;
vector<int> a[1005];
bool visited[1005];
int n,m,s;
void nhap(){
    cin >> n >> m >> s;
    for (int i=1;i<=n;i++){
        a[i].clear();
        visited[i]=false;
    }
    while (m--){
        int x,y ; cin >> x >> y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    for (int i=1;i<=n;i++){
        sort(a[i].begin(),a[i].end());
    }
}
void DFS(int u){
    cout << u << " ";
    visited[u]=true;
    for (int x:a[u]){
        if (!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        DFS(s);
        cout << endl;
    }
}