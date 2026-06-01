#include <bits/stdc++.h>
using namespace std;
int a[15][15]; 
int n;int check=0;
void back_track(string s,int x,int y){
    if(x==n-1 && y==n-1){
        check=1;
        cout << s << " ";
        return;
    }
    int check=0;
    if(a[x+1][y]==1){
        back_track(s+"D",x+1,y);
    }
    if(a[x][y+1]==1){
        back_track(s+"R",x,y+1);
    }
}
int main(){
    int t;cin>> t;
    while (t--){
       cin>> n;
       check=0;
       memset(a,0,sizeof(a));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>> a[i][j];
            }
        }
        string s="";
        if(a[0][0]!=0) back_track(s,0,0);
        
        if(!check) cout << -1;
        cout << endl;

    }
}