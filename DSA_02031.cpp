#include<bits/stdc++.h>
using namespace std;
char c;
int a[105];
int kq[105];
int vs[105];
int k;
int ck[256];

bool check(){
    ck['A']=ck['E']=1;
    for(int i=2;i<k;i++){
        if(!ck[kq[i-1]] && ck[kq[i]] && !ck[kq[i+1]]) return false;
    }
    return true;
}
void in(){
if(check())
{ 
       for(int i=1;i<=k;i++){
        char c=kq[i];
        cout << c ;
    }
    cout << endl;
}
}
void Try(int i){
        for(int j=1;j<=k;j++){
            if(!vs[j]){
                vs[j]=1;
                kq[i]=a[j];
                if(i==k) in();
                else Try(i+1);
                vs[j]=0;
            }
        }
    }
int main(){
    cin >> c;
   k=c-65+1;
    for(int i=1;i<=k;i++){
        a[i]=64+i;
    }
    Try(1);
}