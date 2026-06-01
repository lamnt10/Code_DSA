#include <bits/stdc++.h>
using namespace std;
int check=1;
int n,k;
void sinh(int a[],int k,int kt){
    int i=k;
    while (a[i]==kt-k+i) i--;
    if(i<1) {
        check=0;
    }
    else {
        a[i]++;
        for(int j=i+1;j<=k;j++) a[j]=a[j-1]+1; 
    }
}
int main(){
    cin >> n >> k;
    set<string> s;
    for(int i=1;i<=n;i++){
        string st;cin >> st;
        s.insert(st);
    }
    vector<string> v;
   
    for(string x:s) v.push_back(x);
    int a[k+1]; int kt=v.size();
    for(int i=1;i<=k;i++){
        a[i]=i;
    }
    do{
        for(int i=1;i<=k;i++){
            cout << v[a[i]-1] << " ";
        }
        cout << endl;
        sinh(a,k,kt);
    }while(check);

    
}