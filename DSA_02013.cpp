#include<bits/stdc++.h>
using namespace std;
vector<int> v;
vector<string> kq;
int n,p,s;
int nt[204];
int x[105];
int st;
void sang(){
    nt[0]=nt[1]=0;
    for(int i=2;i<=203;i++){
        nt[i]=1;
    }
    for(int i=2;i*i<=203;i++){
        if(nt[i]){
            for(int j=i*i;j<=203;j+=i){
                nt[j]=0;
            }
            
        }
    }
    for(int i=1;i<=203;i++){
        if(nt[i]) v.push_back(i);
    }
}
void pu(){
    string tmp="";
    for(int i=1;i<=n;i++){
        tmp+=to_string(x[i]) +" ";
    }
    kq.push_back(tmp);
}
void Try(int i,int sum,int pre){
    if(i>n) return;
    for(int j=pre+1;j<v.size();j++){
        if(sum+v[j]>s) continue;
        x[i]=v[j];
        if(sum+v[j]==s && i==n) pu();
        else Try(i+1,sum+v[j],j);
    }
}
int main(){
    sang();
    int t;cin >>t;
    while(t--){
        cin >> n >> p >>s;
        for(int i=0;i<v.size();i++){
        if(v[i]> p) {
            st=i;  
            break;
        }
        }
        kq.clear();
        Try(1,0,st-1);
        cout << kq.size() << endl;
        for(string x:kq) cout << x << endl;
    }
   
}