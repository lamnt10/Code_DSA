#include<bits/stdc++.h>
using namespace std;
string s[1005];
int calc(int i){
    if(s[i]=="+") return calc(2*i+1) +calc(2*i+2);
    if(s[i]=="-") return calc(2*i+1) -calc(2*i+2);
    if(s[i]=="*") return calc(2*i+1) *calc(2*i+2);
    if(s[i]=="/") return calc(2*i+1) /calc(2*i+2);
    return stoi(s[i]);

}
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        cout << calc(0);
        cout << endl;
    }
}