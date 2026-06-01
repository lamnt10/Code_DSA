#include <bits/stdc++.h>
using namespace std;
int n;
int a[25];
vector<int> v;
vector<vector<int>> kq;
void back_track(int i , vector<int>& v){
    if(v.size()>=2) kq.push_back(v);
    for(int j=i;j<n;j++){
        if(v.size()==0 || a[j] > v[v.size()-1] ){
            v.push_back(a[j]);
            back_track(j+1,v);
            v.pop_back();
        }
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
   
    back_track(0,v);
    vector<string> v2;
    for(int i=0;i<kq.size();i++){
        string s;
        for(int j=0;j<kq[i].size();j++){
            s+=to_string(kq[i][j]) + " ";
        }
        v2.push_back(s);
    }
    sort(v2.begin(),v2.end());
    for(string x:v2){
        cout << x << endl;
    }

}