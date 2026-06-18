#include<bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=1;i<s.length();i++){
        if(abs(s[i]-s[i-1])==1) return false;
    }
    return true;
}
int main(){
    int t;cin >>t ;
    while(t--){
        int n;cin >> n;
        string s="";
        for(int i=1;i<=n;i++){
            string x=to_string(i);
            s+=x;
        }
        do{
            if(check(s)){
                cout << s << endl;
            }
        }while(next_permutation(s.begin(),s.end()));
    }
}