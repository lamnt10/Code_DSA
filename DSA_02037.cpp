#include<bits/stdc++.h>
using namespace std;
int n;
int a[20],x[20];
int vs[20];
int nt[10001];
vector<vector<int>> ans;
void sang(){
    nt[0]=nt[1]=0;
    for(int i=2;i<=10000;i++){
        nt[i]=1;
    }
    for(int i=2;i*i<=10000;i++){
        if(nt[i]){
            for(int j=i*i;j<=10000;j+=i){
                nt[j]=0;
            }
        }
    }
}
void in(int i){
    vector<int> cp(x+1,x+i+1);
    ans.push_back(cp);

}
void Try(int i,int sum,int pre){
    for(int j=pre+1;j<=n;j++){
            x[i]=a[j];
            if(nt[sum+a[j]]) in(i);
            Try(i+1,sum+a[j],j);
    }
}
int main(){
    int t;cin >> t;
    sang();
    while(t--){
        ans.clear();
        cin >> n;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        sort(a+1,a+n+1,greater<int>());

        Try(1,0,0);
        sort(ans.begin(),ans.end());
        for(auto v : ans){
            for(int x:v) cout << x << " ";
            cout << endl;
        }
    }
}