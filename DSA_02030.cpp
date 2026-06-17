#include<bits/stdc++.h>
using namespace std;
int x[20];
int a[20];
int k;
char c;int n;
void Try(int i,int pre){
    for(int j=pre;j<=k;j++){
        if(a[j]<x[i-1]) continue;
        x[i]=a[j];
        if(i==n) {
            for(int i=1;i<=n;i++){
                char tmp=x[i];
                cout << tmp;
            }
            cout << endl;
        }
        else Try(i+1,j);
    }
}
int main(){
    cin >> c >> n;
    k=c-65+1;
    char x=66;
    for(int i=1;i<=k;i++){
        a[i]=64+i;
    }
    Try(1,1);
}