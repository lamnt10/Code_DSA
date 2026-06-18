#include<bits/stdc++.h>
using namespace std;
int a[10][10];
int cot[9], cheochinh[16],cheophu[15];
int max_sum=0;
void Try(int i,int sum){
    for(int j=1;j<=8;j++){
        if(cot[j] || cheochinh[i-j+8] || cheophu[i+j-1]) continue;
        cot[j]=1;cheochinh[i-j+8]=1;cheophu[i+j-1]=1;
        if(i==8) {
            if(sum+a[i][j]>max_sum) max_sum=sum+a[i][j];
        }  
        else Try(i+1,sum+a[i][j]);
        cot[j]=0;cheochinh[i-j+8]=0;cheophu[i+j-1]=0;

    }
}
int main(){
    int t;cin >> t;
    for(int k=1;k<=t;k++){
        for(int i=1;i<=8;i++){
            for(int j=1;j<=8;j++){
                cin >> a[i][j];
            }
        }
        max_sum=0;
        Try(1,0);
        cout <<"Test "<<k<<": "<< max_sum << endl;
    }
}