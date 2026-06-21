#include<bits/stdc++.h>
using namespace std;
vector<int> adj[1005];
vector<int> leaf;
int pre[1005];
int vs[1005];
void dfs(int u){
    vs[u]=1;
    for(int v:adj[u]){
        if(!vs[v]){
            pre[v]=u;
            dfs(v);
        }
    }
}
void path(int u,int v){
    vector<int> path;
    while(u!=v){
        path.push_back(v);
        v=pre[v];
    }
    path.push_back(1);
    reverse(path.begin(),path.end());
    for(int x:path) cout << x << " ";
    cout << endl;
}
int main(){
    int t;cin >> t;
    while(t--){
        
        int n;cin >> n;
        memset(vs,0,sizeof(vs));
        for(int i=1;i<=n-1;i++){
            int x,y;cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1);
        for(int i=2;i<=n;i++){
            if(adj[i].size()==1) leaf.push_back(i);
        }
        
        for(int i=0;i<leaf.size();i++){
            path(1,leaf[i]);
        }
        leaf.clear();
        for(int i=1;i<=n;i++) adj[i].clear();
    }
}