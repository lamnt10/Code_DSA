#include<bits/stdc++.h>
using namespace std;
int n;
string a[11];
string x[11];
string kq[11];
int vs[11];
int min_kq=1e9;
int dem(){
    int lap=0;
    for(int i=1;i<n;i++){
        string a=x[i],b=x[i+1];
        for(int j=0;j<a.length();j++){
            for(int k=0;k<b.length();k++){
                if(a[j]==b[k]) lap++;
            }
        }
    }
    return lap;
}
void Try(int i){
    for(int j=1;j<=n;j++){
        if(!vs[j]){
            vs[j]=1;
            x[i]=a[j];
            if(i==n){
                int ne=dem();
                if(ne<min_kq) min_kq=ne;
                for(int k=1;k<=n;k++){
                    kq[k]=x[k];
                }
            } 
            else Try(i+1);
            vs[j]=0;
        }
    }
}
int main(){
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    Try(1);
    cout << min_kq << endl;

}