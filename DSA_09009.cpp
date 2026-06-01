#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
int visited[1005];
void nhap(){
    cin>>n>>m;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        ke[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while(!q.empty()){
        int x=q.front();q.pop();
        for(int v:ke[x]){
            if(!visited[v]){
                visited[v]=1;
                q.push(v);
            }
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        int cnt=0;
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                cnt++;
                BFS(i);
            }
        }
        cout << cnt << endl;
    }
}