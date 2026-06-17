#include<bits/stdc++.h>
using namespace std;
int n;
int cot[11],cheochinh[20],cheophu[20];
int cnt=0;
void Try(int i){
    for(int j=1;j<=n;j++){
        if(cot[j] || cheochinh[i-j+n] || cheophu[i+j-1]) continue;
        cot[j]=1;cheochinh[i-j+n]=1;cheophu[i+j-1]=1;
        if(i==n) cnt++;
        else Try(i+1);
        cot[j]=0;cheochinh[i-j+n]=0;cheophu[i+j-1]=0;
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        cnt=0;
        Try(1);
        cout << cnt << endl;
    }
}