#include<bits/stdc++.h>
using namespace std;
int n,k;
int a[11][11];
int x[11];
int cot[11];
int cnt=0;
vector<int> kq[100];
void luu(){
    for(int i=1;i<=n;i++){
        kq[cnt].push_back(x[i]);
    }
}
void Try(int i,int sum){
    for(int j=1;j<=n;j++){
        if(!cot[j]){
            
           if(sum+a[i][j]>k) continue;
           cot[j]=1;
           x[i]=j;
           if(i==n &&sum+a[i][j]==k)  {
                luu();
                cnt++;
           }
           else Try(i+1,sum+a[i][j]);
           cot[j]=0;
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
        }
    }
    Try(1,0);
    cout << cnt << endl;
    for(int i=0;i<cnt;i++){
        for(int x:kq[i]) cout << x << " ";
        cout << endl;
    }

}