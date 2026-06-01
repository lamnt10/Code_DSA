#include <bits/stdc++.h>
using namespace std;
string s="";
int a[15];
bool check[15]={false};
void back_track(int i,int len){
    for(int j=0;j<len;j++){
        if(!check[j]){
            check[j]=true;
            a[i]=j;
            if(i==(len-1)){
                for(int k=0;k<len;k++){
                    cout << s[a[k]] ;
                }
                cout << " " ;
            }
            else {
                back_track(i+1,len);
            }
            check[j]=false;
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        cin >> s;
        int len=s.length();
        back_track(0,len);
        cout << endl;
    }
}