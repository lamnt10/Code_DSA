#include<bits/stdc++.h>
using namespace std;
int a[100];
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        vector<string> v;
        v.push_back("0");
        v.push_back("1");
        for(int i=2;i<=n;i++){
            for(int i=v.size()-1;i>=0;i--){
                v.push_back("1"+v[i]);
                v[i] ="0"+v[i];
            }
            if(i==n) break;
        }
        for(string x:v) cout << x << " ";
        cout << endl;
    }
}