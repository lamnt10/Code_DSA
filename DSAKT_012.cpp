#include<bits/stdc++.h>
using namespace std;
#define ll long long;
int n ,s;
int a[105];
int min_kq=1e9;
int check=0;
void Try(int i,long long sum,int pre){
    for(int j=pre+1;j<=n;j++){
        if(sum+a[j]>s) continue;
        if(sum+a[j]==s) {
           if(i<min_kq) {
            min_kq=i;
            check=1;
           }
        }
        else Try(i+1,sum+a[j],j);
    }
}
int main(){
    cin >> n >> s;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    Try(1,0,0);
    if(check==0) cout << -1;
    else cout << min_kq;
}