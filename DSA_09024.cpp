#include <bits/stdc++.h>
using namespace std;
int n,m,s;
vector<int> ke[1005];
int visited[1005];
void nhap(){
    cin >> n >> m >> s;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    for (int i=1;i<=m;i++){
        int x , y;cin >> x >> y;
        ke[x].push_back(y);
    }
    memset(visited,0,sizeof(visited));
    for (int i=1;i<=n;i++){
        sort(ke[i].begin(),ke[i].end());
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u]=1;
    while (!q.empty()){
        int x=q.front();
        cout << q.front()<<" ";
        q.pop();
        for (int x:ke[x]){
            if (!visited[x]){
                q.push(x);
                visited[x]=1;
            }
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        BFS(s);
        cout << endl;
    }
}