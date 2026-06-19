#include<bits/stdc++.h>
using namespace std;
string a[11];
int min_lap=1e9;
int n;
int checklap[11][11];
int vs[11];
int dem(string a,string b){
    int d1[26]={0};int d2[26]={0};
    for(int i=0;i<a.length();i++){
        d1[a[i]-65]++;
    }
    for(int i=0;i<b.length();i++){
        d2[b[i]-65]++;
    }
    int cnt=0;
    for(int i=0;i<26;i++){
        cnt=cnt+min(d1[i],d2[i]);
    }
    return cnt;
}
void Try(int i,int lap,int pre){
    if(i>n) return;
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            if(lap+checklap[pre][j]>min_lap) continue;
            vs[j]=1;
            if(i==n && lap+checklap[pre][j]<min_lap) min_lap=lap+checklap[pre][j];
            else Try(i+1,lap+checklap[pre][j],j);
            vs[j]=0;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++) cin >> a[i];
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            int lap=dem(a[i],a[j]);
            checklap[i][j]=lap;
            checklap[j][i]=lap;
        }   

    }
        Try(1,0,0);
        cout << min_lap << endl;
}