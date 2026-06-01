#include <bits/stdc++.h>
using namespace std;
int ans;int a[1005];
vector<int> kq;
int index,cnt;
int n,k;
void tong(int ans,int index){
    if(ans==k) {
        cnt++;
        for(int x:kq) cout << x << " ";
        cout << endl;
        return;
    }
    if(index>n || ans>k) return;
    tong(ans,index+1);
    kq.push_back(a[index]);
    tong(ans+a[index],index+1);
    kq.pop_back();
}
int main(){
    cin >> n >> k;
    
    for(int i=0;i<n;i++) cin >> a[i];
    tong(0,0);
    cout << cnt ;
}