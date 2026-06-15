#include<bits/stdc++.h>
using namespace std;
int t;
void sinh(string &s){
    int n=s.size()-1;
    while(n>=0 && s[n]=='1'){
        s[n]='0';
        n--;
    }
    if(n<0) return;
    else s[n]='1';
}
int main(){
    cin >> t;
    while (t--){
        string s;
        cin  >> s;
        sinh(s);
        cout << s << endl;
    }
}