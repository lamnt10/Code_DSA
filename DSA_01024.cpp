#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[105];
vector<string> v;
void sinh(){
    int pos=k;
    while(pos>=1 && a[pos]==n-k+pos) pos--;
    if(pos>=1){
        a[pos]++;
        for(int i=pos+1;i<=k;i++){
            a[i]=a[i-1]+1;
        }
    }
    else ok=0;
}
int main(){
    cin >> n >> k;
    set<string> s;
    for(int i=1;i<=n;i++){
        string x;cin >> x;
        s.insert(x);
    }
    n=s.size();
    for(string x:s) v.push_back(x);
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    while(ok){
        for(int i=1;i<=n;i++){
            cout << v[a[i]-1] << " ";
        }
        cout << endl;
        sinh();
    }
    ok=1;
}