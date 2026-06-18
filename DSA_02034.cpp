#include<bits/stdc++.h>
using namespace std;
int n;
int x[105];
int check[20];
void in(){
    for(int i=1;i<=n;i++){
        cout << x[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(check[j] || (i>1 && abs(j-x[i-1]) ==1) ) continue;
        x[i]=j;
        check[j]=1;
        if(i==n){
            in();
        }
        else Try(i+1);
        check[j]=0;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
    memset(check,0,sizeof(check));  
    memset(x,0,sizeof(x));
    Try(1);
}

}