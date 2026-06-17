#include<bits/stdc++.h>
using namespace std;
int a[105],cnt=0;int n,k,s;
void Try(int pos,int sum){
    if(pos> k){
        if(sum==s) cnt++;
        return;
    }
    for(int i=a[pos-1]+1;i<=n-k+pos;i++){
        a[pos]=i;
        Try(pos+1,sum+a[pos]);
    }
}
int main(){
    
    while(cin >> n >> k >> s){
        if(n==0 && k==0 && s==0) {
            break;
        }
        a[0]=0;
        Try(1,0);
        cout << cnt << endl;
        cnt=0;
    }
}