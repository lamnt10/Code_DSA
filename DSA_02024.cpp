#include<bits/stdc++.h>
using namespace std;
int n;
int a[105];
int x[105];
set<string> s;
void Try(int i,int pre){
    for(int j=pre+1;j<=n;j++){
        if(a[j]<x[i-1]) continue;
        x[i]=a[j];
        if(i>=2) {
            string tmp="";
            for(int k=1;k<=i;k++){
                tmp+=to_string(x[k]) +" ";
            }
            s.insert(tmp);
        }
        Try(i+1,j);
    }
}
int main(){
    cin >> n ;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    a[0]=0;
    Try(1,0);
    for(string x:s){
        cout << x << endl;
    }
}