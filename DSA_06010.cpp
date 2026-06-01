#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[10]={};
        for(int i=1;i<=n;i++){
            string s;cin >> s;
            for(int i=0;i<s.length();i++){
                a[s[i]-'0']++;
            }
        }
        for(int i=0;i<=9;i++){
            if(a[i]!=0) cout <<i << " ";
        }
        cout << endl;
    }
}