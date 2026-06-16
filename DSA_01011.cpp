#include<bits/stdc++.h>
using namespace std;
int a[105];
int n;
int main(){
    int t;cin >> t;
    while(t--){
        int te; cin >> te;
        string s;cin >> s;
        n=s.length();
        for(int i=0;i<=n-1;i++){
            a[i+1]=s[i]-'0';
        }
        int pos=n-1;
        while(pos>=1 && a[pos]>=a[pos+1]) pos--;
        if(pos<1){
            cout << te << " BIGGEST" << endl;
            continue;
        }
        int p2=n;
        while(a[p2]<=a[pos]) p2--;
        swap(a[p2],a[pos]);
        int l=pos+1,r=n;
        while(l<r){
            swap(a[l],a[r]);
            l++;r--;
        }
        cout << te << " ";
        for(int i=1;i<=n;i++){
            cout << a[i];
        }
        cout << endl;
    }   
}