#include<bits/stdc++.h>
using namespace std;
int n,k,ok=1;
int a[20];
void sinh(){
    int pos=n;
    while(pos>=1 && a[pos]==1){
        a[pos]=0;
        pos--;
    }
    if(pos>=1) a[pos]=1;
    else ok=0;
}
bool check(){
    int cnt=0;
    int curr=0;
    for(int i=1;i<=n;i++){
        if(a[i]==0){
            curr++;
        }
        else{
            if(curr==k) cnt++;
            curr=0;
        }
    }
    if(curr==k) cnt++;
    if(cnt==1) return true;
    return false;
}
int main(){
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        a[i]=0;
    }
    vector<string> v;
    while(ok){
        if(check()){
            string s="";
            for(int i=1;i<=n;i++){
                if(a[i]==0) s+="A";
                else s+="B";
            }
            v.push_back(s);
        }
        sinh();
    }
    cout << v.size() << endl;
    for(string s:v) cout << s <<endl;
}