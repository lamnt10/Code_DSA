#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005], t_ke[1005];
int visited[1005];
stack<int> topo;
void nhap(){
    cin >> n >> m;
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=n;i++){
        ke[i].clear();
        t_ke[i].clear();
    }
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        t_ke[y].push_back(x);
    }
}
void DFS(int u){
    visited[u]=1;
    for(int x:ke[u]){
        if(!visited[x]){
            visited[x]=1;
            DFS(x);
        }
    }
    topo.push(u);
}
void DFS2(int u){
    visited[u]=1;
    for(int x:t_ke[u]){
        if(!visited[x]){
            visited[x]=1;
            DFS2(x);
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
                DFS(i);
            }
        }
        int cnt2=0;
        memset(visited,0,sizeof(visited));
        for(int i=1;i<=n;i++){
            if(!visited[i]){
                cnt2++;
                DFS2(i);
            }
        }
        if(cnt==cnt2==1){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
}