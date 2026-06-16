#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        string s;cin >> s;
        int pos=s.length()-1;
        while(pos>=0 && s[pos]=='0'){
            s[pos]='1';
            pos--;
        }
        if(pos>=1){
            s[pos]='0';
            cout << s;
        }
        else{
            for(int i=1;i<=s.length();i++){
                cout << '1' ;
            }
        }
        cout << endl;
    }

}