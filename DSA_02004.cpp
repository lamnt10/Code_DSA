#include<bits/stdc++.h>
using namespace std;
int n,a[10][10];
int check[10][10];
set<string> s;
void Try(int x,int y,string path){
    check[y][x]=1;
    if(x==n && y==n){
        s.insert(path);
    }
    else{
    if(x<n && a[y][x+1]==1 && check[y][x+1]==0) Try(x+1,y,path+"R");
    
    if(y<n && a[y+1][x]==1 && check[y+1][x]==0) Try(x,y+1,path+"D");

    if(x>1 && a[y][x-1]==1 && check[y][x-1]==0) Try(x-1,y,path+"L");
   
    if(y>1 && a[y-1][x]==1 && check[y-1][x]==0) Try(x,y-1,path+"U"); 
    }
    check[y][x]=0;
}
int main(){
    int t;cin >> t;
    while(t--){
        cin>>n;
        s.clear();
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cin>>a[i][j];
            }
        }
        memset(check,0,sizeof check);
        Try(1,1,"");
        if(s.size()==0) {
            cout<<-1<<endl;
            continue;
        }
        for(string x:s) cout << x << " ";
        cout << endl;
    }
}