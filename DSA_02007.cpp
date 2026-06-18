#include<bits/stdc++.h>
using namespace std;
int k;
string s;
string ans;
void Try(int i,int k){
    if(s>ans) ans=s;
    if(i>s.length()-1 || k==0) return;
    char ma='0';
    int mai=0;
    for(int j=i;j<s.length();j++){
        if(s[j]>ma) {
            ma=s[j];
            mai=j;
        }
    }
    if(mai==i) Try(i+1,k);
    for(int j=i+1;j<s.length();j++){
        if(s[j]!=ma) continue;
        swap(s[j],s[i]);
        Try(i+1,k-1);
        swap(s[j],s[i]);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> k >> s;
        ans="";
        Try(0,k);
        cout << ans << endl;
    }
}