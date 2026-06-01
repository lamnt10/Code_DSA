#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
int visited[1005];
int check=0;
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        ke[i].clear();
    }
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
    }
}
void DFS(int u){
    visited[u]=1;
    for(int x:ke[u]){
        if(visited[x]==0){
            DFS(x);
        }
        else if(visited[x]==1){
            check=1;
        }
    }
    visited[u]=2;   
}
int main(){
    int t;cin >>t ;
    while (t--){
        nhap();
        check=0;
        for (int i=1;i<=n;i++){
            if(!visited[i]){
                DFS(i);
            }
        }
        if(check) cout << "YES"<< endl;
        else cout << "NO" << endl;
    }
}