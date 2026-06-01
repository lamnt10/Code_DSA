#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin >> n;
    vector<int> a[55]; 
    cin.ignore();
    for (int i=1;i<=n;i++){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string digit;
        while (ss >> digit){
            a[i].push_back(stoi(digit));
        }
    }
    for (int i=1;i<=n;i++){
        sort(a[i].begin(),a[i].end());
        for (int x:a[i]){
            if (x>i) cout << i << " " << x << endl;
        }
    }
}