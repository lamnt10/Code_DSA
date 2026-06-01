#include <bits/stdc++.h>
using namespace std;
int n,k;
int check=1;
int a[20];
void sinh(){
    int i=k;
    while (a[i]==n-k+i) i--;
    if(i<1){
        check=0;
    }
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1;
    }
}
void back_track(int i,int start){
    
    for(int j=start;j<=n-k+i;j++){
        a[i]=j;
        if(i==k){
            for(int q=1;q<=k;q++){
                char c=64+a[q];
                cout << c ;
            }
            cout << endl;
        }
        else{
            back_track(i+1,j+1);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        cin >> n >> k;
        back_track(1,1);
    }
}