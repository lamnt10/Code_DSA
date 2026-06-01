#include <bits/stdc++.h>
using namespace std;
char a[1005][1005];
int cnt;
int dx[]={-1,1,0,0};
int dy[]={0,0,-1,1};
void duyet(int x,int y){
    if(a[x][y]=='#'){
        a[x][y]='.';
        for(int i=0;i<4;i++){
            duyet(x+dx[i],y+dy[i]);
        }
        
    }
}
int main(){
    int n,m;cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]=='#') {
                cnt++;
                duyet(i,j);
            }
        }
    }
    cout << cnt << endl;

}