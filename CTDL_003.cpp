#include<bits/stdc++.h>
using namespace std;
int n,b,x[105],w[105],c[105];
int f,fopt[105];
void save(int currcost){
    f=currcost;
    for(int i=1;i<=n;i++){
        fopt[i]=x[i];
    }
}
void Try(int pos,int cost,int weight){
    for(int i=0;i<=1;i++){
        if(weight+i*w[pos]>b) continue;
        x[pos]=i;
        if(pos ==n && cost + i*c[pos]>f) save(cost + i*c[pos]);
        if(pos<n) Try(pos+1,cost + i*c[pos],weight+i*w[pos]);
    }
}
int main(){
    cin >> n >> b;
    for(int i=1;i<=n;i++) cin >> c[i];
    for(int i=1;i<=n;i++) cin >> w[i];
    f=-1e9;
    Try(1,0,0);
    cout << f << endl;
    for(int i=1;i<=n;i++){
        cout << fopt[i] << " ";
    }
}