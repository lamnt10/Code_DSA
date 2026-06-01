#include <bits/stdc++.h>
using namespace std;

void in(vector<int> v){
    cout << "[" ;
    for(int i=0;i<v.size();i++){
        cout << v[i] ;
        if(i!=v.size()-1) cout << " ";
    }
    cout << "] ";
}
void back_track(vector<int> v){
    if(v.size()==1) in(v);
    else {
        vector<int> v2;
        for(int i=0;i<v.size()-1;i++){
            v2.push_back(v[i]+v[i+1]);
        }
        back_track(v2);
        in(v);
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        vector<int> a;
        for(int i=0;i<n;i++){
            int x;cin >> x;
            a.push_back(x);
        }
        back_track(a);
        cout << endl;
    }
}