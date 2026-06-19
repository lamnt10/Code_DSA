#include<bits/stdc++.h>
using namespace std;
int t,n;
int a[11];
vector<string> v;
void in(int i){
    string s="";
    s+="(";
    for(int j=1;j<i;j++){
        s=s + to_string(a[j])+" ";
    }
    s=s+ to_string(a[i]) + ")";
    v.push_back(s);
}
void Try(int i,int sum,int pre){
    for(int j=pre;j>=1;j--){
        if(sum+j>n) continue;
        a[i]=j;
        if(sum+j==n) in(i);
        else Try(i+1,sum+j,j);
    }
}
int main(){
    cin >> t;
    while(t--){
        cin >> n;
        v.clear();
        Try(1,0,n);
        cout << v.size() <<endl;
        for(string x:v) cout << x << " ";
        cout << endl;
    }
}   