#include<bits/stdc++.h>
using namespace std;
string ngay[] = {"22","20","02"};
string nam[] = {"2000","2002","2020","2022","2200","2202","2220","2222"};
set<string> s;
int main(){
    for(int i=0;i<3;i++){
        for(int j=0;j<8;j++){
           string x=ngay[i]+"/02/"+nam[j];
            s.insert(x);
        }
    }
    for(string x:s) cout << x << endl;
}