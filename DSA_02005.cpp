#include<bits/stdc++.h>
using namespace std;
int a[105],n;
int vs[105];
string s;
void back_track(int i){
    if(i>n){
        for(int j=1;j<=n;j++){
            cout << s[a[j]-1];
        }
        cout <<  " ";
        return;
    }
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            a[i]=j;
            vs[j]=1;
            back_track(i+1);
            vs[j]=0;
        }
    }

}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> s;
        n=s.length();
        back_track(1);
        cout << endl;
    }
}