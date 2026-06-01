#include <bits/stdc++.h>
using namespace std;
int n;
int b[1005];
bool check[1005]={false};
void back_track(int j,int a[]){
    for(int i=1;i<=n;i++){
        if(!check[i]){
            b[j]=i;
            check[i]=true;
            if(j==n){
               for(int k=1;k<=n;k++){
                cout << a[b[k]] <<  " ";
                }
                cout << endl;
            }
            else{
                back_track(j+1,a); 
            }      
            check[i]=false;
        }
    }
}
int main (){
    cin >> n;
    int a[n+1];a[0]=0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    back_track(1,a);
}