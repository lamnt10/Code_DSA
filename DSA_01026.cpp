#include <bits/stdc++.h>
using namespace std;
int n;
int a[1005];
bool check(int i,int x){
    if(x==6){
        if(i==1) return false;
        if(i>4 && a[i-1]==6 && a[i-2]==6 && a[i-3]==6){
            return false;
        }
        return true;
    }
    if(x==8){
        if(i==1) return true;
        if(a[i-1]==8) return false;
        return true;
    }
}
void back_track(int i){
    if(i==n){
        if(check(i,6)){
            a[i]=6;
            for(int j=1;j<=n;j++){
                cout << a[j] ;
            }
            cout << endl;
        }
        return;
    }
    else{
        if(check(i,6)){
            a[i]=6;
            back_track(i+1);
        }
        if(check(i,8)) {
            a[i]=8;
            back_track(i+1);
        }
    }
}
int  main(){
    cin >> n;
    a[1]=8;
    back_track(1);

}