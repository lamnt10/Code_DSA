#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int cnt=0; int n,m;
void back_track(int x,int y){
    if(x==n-1 && y==m-1){
        cnt++;
        return;
    }
    if(x<n-1) back_track(x+1,y);
    if(y<m-1) back_track(x,y+1);
}
int main(){
    int t;cin >> t;
    while (t--){
        cnt=0;
       cin >> n >> m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin >> a[i][j];
            }
        }
        back_track(0,0);
        cout << cnt << endl;

    }    
}