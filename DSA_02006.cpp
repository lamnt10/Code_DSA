#include <bits/stdc++.h>
using namespace std;
int a[1005];
int n,k;
int check=0;
vector<int> v;
void in(){
    cout << "[";
    for(int i=0;i<v.size();i++){
        cout << v[i] ;
        if(i!=v.size()-1) cout << " ";
    }
    cout << "] ";
}

void back_track(int i,int sum){
    if(i==n ){
        if(sum==k){
            in();
            check=1;
        }
        return;
    }
    if(sum+a[i]<=k){
            v.push_back(a[i]);
            back_track(i+1,sum+a[i]);
            v.pop_back();
        }
    back_track(i+1,sum);
}
int main(){
    int t;cin >> t;
    while (t--){
        v.clear();
        check=0;
        cin >> n >> k;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        back_track(0,0);
        if(!check)  cout << -1;
        cout << endl;

    }
}