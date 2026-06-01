#include <bits/stdc++.h>
using namespace std;
vector<int> ke[1005];
int visited[1005];
int n,m,s;
void reset(){
    memset(visited,0,sizeof(visited));

}
void nhap(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    while (m--){
        int x,y; cin >> x >> y;
        ke[y].push_back(x);
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
    while (!q.empty()){
        int x=q.front();
        q.pop();
        for (int v:ke[x]){
            if (visited[v]==0){
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        nhap();
        cin >> s;
        while (s--){
            reset();
            int a,b;cin >> a >> b;
            BFS(a);
            if (visited[b]==1) cout << "YES\n";
            else cout << "NO\n";
        }
    }
}