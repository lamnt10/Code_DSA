#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string s ;cin >> s;
        for(int i=1;i<s.length();i++){
            bool c= s[i-1]!=s[i];
            char cr=c+'0';
            s[i]=cr;
        }
        cout << s << endl;
    }
}