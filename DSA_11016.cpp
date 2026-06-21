#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        set<int> s;
        while(n--){
            int par,chi;char c;
            cin >> par >> chi >> c;
            if(s.size()==0) s.insert(par);
            s.insert(chi);
        }
        for(int x:s) cout << x << " ";
        cout << endl;
    }
}