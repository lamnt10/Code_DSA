#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<pair<int,int>> dscanh;
set<int> ke[1005];
int visited[1005];
void nhap(){
    cin >> n >> m;
    dscanh.clear();
    memset(visited,0,sizeof(visited));
    for (int i=1;i<=n;i++){
        
        ke[i].clear();
    }
    for (int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].insert(y);
        ke[y].insert(x);
        dscanh.push_back({x,y});
    }
}
void DFS(int u){
    visited[u]=1;
    for (int x:ke[u]){
        if (!visited[x]){
            visited[x]=1;
            DFS(x);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        int cnt=0;
        for (int i=1;i<=n;i++){
            if (!visited[i]){
                cnt++;
                DFS(i);
            }
        }
        for (pair<int,int> it:dscanh){
            memset(visited,0,sizeof(visited));
            int x=it.first,y=it.second;
            ke[x].erase(y);ke[y].erase(x);
            int cnt1=0;
            for(int i=1;i<=n;i++){
                if(!visited[i]){
                    cnt1++;
                    DFS(i);
                }
            }
            if(cnt1>cnt){
                cout << x << " " << y <<" ";
            }
            ke[x].insert(y);ke[y].insert(x);
        }
        cout << endl;
    }
}