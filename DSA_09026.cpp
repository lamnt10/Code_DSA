#include <bits/stdc++.h>
using namespace std;
int n,m,u,v;
vector<int> ke[1005];
int visited[1005];
int parent[1005];
void nhap(){
    cin >> n >> m >> u >> v;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for (int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
       
    }
    for (int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
}
void BFS(int u){
    visited[u]=1;
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x=q.front();
        q.pop();
        for (int y:ke[x]){
            if (!visited[y]){
                q.push(y);
                parent[y]=x;
                visited[y]=1;
            }
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        BFS(u);
        if (!visited[v]){
            cout << -1 << endl;
        }
        else {
            vector<int> b;
            while (u!=v){
                b.push_back(v);
                v=parent[v];
            }
            b.push_back(u);
            reverse(b.begin(),b.end());
            for (int x:b){
                cout << x << " ";
            }
            cout << endl;
        }
    }
}