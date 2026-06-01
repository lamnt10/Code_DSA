#include <bits/stdc++.h>
using namespace std;
vector<int> a[1005];
int main(){
    int n;cin >> n;
    cin.ignore();
    for (int i=1;i<=n;i++){
        string s;
        getline(cin , s);
        stringstream ss (s);
        string digit;
        while (ss >> digit){
            a[i].push_back(stoi(digit));
        }
    }
    for (int i=1;i<=n;i++){
        for (int x:a[i]){
            if (x>i){
                cout << i << " " << x << endl;
            }
        }
    }
}