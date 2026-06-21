#include<bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}
int main(){
    int t;cin >>t;
    while(t--){
        int n;cin >> n;
        pair<int,int> a[n];
        for(int i=0;i<n;i++){
            pair<int,int> p;
            cin>>p.first;
            cin >> p.second;
            a[i]=p;
        }
        sort(a,a+n,cmp);
        vector<pair<int,int>> kq;
        kq.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(a[i].first>=kq[kq.size()-1].second) kq.push_back(a[i]);
        }
        cout << kq.size() << endl;
    }
}