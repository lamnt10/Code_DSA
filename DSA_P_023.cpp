#include<bits/stdc++.h>
using namespace std;
int prime[1000001];
int n,k,a[105];
int cnt=0;
void sang(){
    prime[0]=0;prime[1]=0;
    for(int i=2;i<=1000000;i++){
        prime[i]=1;
    }
    for(int i=2;i<sqrt(1000000);i++){
        if(prime[i]){
            for(int j=i*i;j<=1000000;j+=i){
                prime[j]=0;
            }
        }
    }
}
void Try(int pos){
    if(pos>k){
        cnt++;
        if(prime[cnt]){
            cout << cnt << ": " ;
            for(int i=1;i<=k;i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    for(int i=a[pos-1]+1;i<=n-k+pos;i++){
        a[pos]=i;
        Try(pos+1);
    }
}
int main(){
    sang();
    a[0]=0;
    cin >> n >> k;
    Try(1);
}