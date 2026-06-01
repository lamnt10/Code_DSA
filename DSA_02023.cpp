#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n,k;
vector<string> v;
int a[100];
void back_track(int i,int m){
    for(int j=a[i-1]+1;j<=m-k+i;j++){
        a[i]=j;
        if(i==k){
            for(int l=1;l<=k;l++){
                cout << v[a[l]-1] << " ";
            }
            cout << endl;
        }
        else back_track(i+1,m);
    }
}
int main(){
   cin >> n >> k;
   set<string> se;
   for(int i=1;i<=n;i++){
        string s;cin >> s;
        se.insert(s);
   }
   for(string x:se) v.push_back(x);
 
   back_track(1,v.size());
}