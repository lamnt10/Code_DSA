#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int visited[1005];
int parent[1005];
int n,m,s,t;
void nhap(){
    cin >> n >> m >> s >> t;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    memset(visited,0,sizeof(visited));
    memset(parent,0,sizeof(parent));
    for (int i=0;i<m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void DFS(int u){
    visited[u]=1;
    for (int x:ke[u]){
        if(visited[x]==0){ 
            parent[x]=u;
            DFS(x);
        }
       
    }
}
int main(){
    int g;cin >> g;
    while (g--){
        nhap();
        DFS(s);
        if(!visited[t]){
            cout << -1 << endl;
        }
        else {
            vector<int> kq;
            while (t!=s){
                kq.push_back(t);
                t=parent[t];
            }
            kq.push_back(s);
            reverse(kq.begin(),kq.end());
            for (int x:kq) cout << x << " ";
            cout << endl;
        }
    }
}