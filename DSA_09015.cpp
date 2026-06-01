#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<int> ke[1005];
int degree[1005];
vector<int> topo;
void nhap(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        ke[i].clear();
    }
    topo.clear();
    memset(degree,0,sizeof(degree));
    for(int i=1;i<=m;i++){
        int x,y;cin >> x >> y;
        ke[x].push_back(y);
        degree[y]++;
    }
}
void Kahn(){
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(degree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int v=q.front();q.pop();
        topo.push_back(v);
        for(int x:ke[v]){
            degree[x]--;
            if(degree[x]==0){
                q.push(x);
            }
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        nhap();
        Kahn();
        if(topo.size() < n){
            cout <<"YES" << endl;
        }
        else cout << "NO" << endl;
    }
}