#include <bits/stdc++.h>
using namespace std;
int n,k;
int a[1005];
bool check[1005]={false};
int b[1005];
void back_track(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        if(!check[j] ){
            a[i]=j;
            check[j]=true;
        if(i==k){
            for(int i=1;i<=k;i++){
                cout << b[a[i]] << " ";
            }
            cout << endl;
        }
        else{
            back_track(i+1);
        }
            check[j]=false;    
        }
        
    }
}
int main(){
    cin >> n >> k;
    set<int> s;
    for(int i=1;i<=n;i++){
        int x; cin>> x;
        s.insert(x);
    }
    n=s.size();int tmp=1;
    for(int x:s){
        b[tmp]=x;
        tmp++;
    } 
    back_track(1);
}