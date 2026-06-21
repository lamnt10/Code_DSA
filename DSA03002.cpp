#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;cin >> a >> b;
    string c,d;
    for(int i=0;i<a.length();i++){
        if(a[i]=='5') {
            string tmp="6";
            c+=tmp;
        }
        else {
            string tmp;
            tmp=a[i];
            c+=tmp;
        }
    }
        for(int i=0;i<b.length();i++){
        if(b[i]=='5') {
            string tmp="6";
            d+=tmp;
        }
        else {
            string tmp;
            tmp=b[i];
            d+=tmp;
        }
    }
    int x,y;x=stoi(c);y=stoi(d);
    int g=x+y;
    string e,f;
        for(int i=0;i<a.length();i++){
        if(a[i]=='6') {
            string tmp="5";
            e+=tmp;
        }
        else {
            string tmp;
            tmp=a[i];
            e+=tmp;
        }
    }
        for(int i=0;i<b.length();i++){
        if(b[i]=='6') {
            string tmp="5";
            f+=tmp;
        }
        else {
            string tmp;
            tmp=b[i];
            f+=tmp;
        }
    }
    x=stoi(e);y=stoi(f);
    cout <<x+y <<  " " << g;

}