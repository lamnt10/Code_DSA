#include <bits/stdc++.h>
using namespace std;
int n,m,check;
vector<int> ke[1005];
int parent[1005],visited[1005];
void nhap(){
    cin >> n >> m;
    memset(parent,0,sizeof(parent));
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        ke[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
}
void DFS(int u){
    visited[u]=1;
    for(int x:ke[u]){
        if(visited[x]==1 && x!=parent[u]){
            check=1;
        }
        if (!visited[x]){
            parent[x]=u;
            DFS(x);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        for (int i=1;i<=n;i++){
            if(!visited[i]) DFS(i);
        }
        if (check) cout << "YES" << endl;
        else cout << "NO" << endl;
        check=0;
    }
}