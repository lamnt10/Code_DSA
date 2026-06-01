#include <bits/stdc++.h>
using namespace std;
int n,m,u,v;
vector<int> ke[1005];
int visited[1005],parent[1005];
void nhap(){
    cin >> n >> m >> u >> v;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(visited));
    for (int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
    }
    for (int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
}
void DFS(int u){
    visited[u]=1;
    for (int x:ke[u]){
        if (!visited[x]){
            visited[x]=1;
            parent[x]=u;
            DFS(x);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        DFS(u);
        if (!visited[v]){
            cout << -1 << endl;
        }
        else {
            vector<int> r;
            while (u!=v){
                r.push_back(v);
                v=parent[v];
            }
            r.push_back(u);
            reverse(r.begin(),r.end());
            for (int x:r){
                cout  << x << " ";
            }
            cout << endl;
        }
    }
}