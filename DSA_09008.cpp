#include <bits/stdc++.h>
using namespace std;
vector<int> a[1005];
bool visited[1005];
int n,m,s;
void nhap(){
    cin >> n >> m;
    for (int i=1;i<=n;i++){
        a[i].clear();
        visited[i]=false;
    }
    while (m--){
        int x,y ; cin >> x >> y;
        a[x].push_back(y);
        
    }
    for (int i=1;i<=n;i++){
        sort(a[i].begin(),a[i].end());
    }
}
void DFS(int u){
    visited[u]=true;
    for (int x:a[u]){
        if (!visited[x]){
            DFS(x);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        int cnt = 0;
        for (int i=1;i<=n;i++){
            if (visited[i]==false){
                cnt++;
                DFS(i);
            }
        }
        cout << cnt;
        cout << endl;
    }
}