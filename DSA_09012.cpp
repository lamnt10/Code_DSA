#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
int visited[1005];
void nhap(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        ke[i].clear();
    }
    memset(visited,0,sizeof(visited));
    for (int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        ke[y].push_back(x);
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
        int dem1=0;
        for (int i=1;i<=n;i++){
            if (!visited[i]){
                dem1++;
                DFS(i);
            }
        }
        vector<int> v;
        for (int i=1;i<=n;i++){
            memset(visited,0,sizeof(visited));
            visited[i]=1;
            int dem2=0;
            for(int j=1;j<=n;j++){
                if (!visited[j]){
                    dem2++;
                    DFS(j);
                }
            }
            if(dem2>dem1) v.push_back(i);
        }
        for(int x:v) cout << x << " ";
        cout << endl;
    }
}