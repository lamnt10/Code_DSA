#include<bits/stdc++.h>
using namespace std;
int n,k;
int kq[105];
int a[105];
int cnt=0;
void Try(int pos,int j){
    if(pos>k){
        cnt++;
        return;
    }
    for(int i=j;i<=n;i++){
        if(pos==1 || a[i]>kq[pos-1]) {
            kq[pos]=a[i];
            Try(pos+1,i+1);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        cin  >> a[i];
    }
    Try(1,1);
    cout << cnt;
}