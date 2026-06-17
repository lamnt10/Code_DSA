#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[105][105];
int cnt=0;
void Try(int x,int y){
    if(x==n-1 && y==m-1) {
        cnt++;
        return;
    }
    if(x<n-1) Try(x+1,y);
    if(y<m-1) Try(x,y+1);

}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=1;j<=m;j++){
                cin >> a[i][j];
            }
        }
        Try(0,0);
        cout << cnt << endl;
        cnt=0;
    }
}