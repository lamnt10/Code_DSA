#include<bits/stdc++.h>
using namespace std;
int n,a[1005];
int ok=0;int s=0;
void Try(int pre,int presum){
    if(ok) return;
    for(int j=pre+1;j<=n;j++){
        if(presum+a[j]>s) continue;
        else if(presum+a[j]==s) {
            ok=1;
            return;
        }
        else Try(j,presum+a[j]);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n ;
        s=0;
        for(int i=1;i<=n;i++){
            cin >> a[i];
        }
        
        for(int i=1;i<=n;i++){
            s+=a[i];
        }
        if(s%2==1){
            cout << "NO\n";
            continue;
        }
        else{
            s=s/2;
            ok=0;
            Try(1,0);
            if(ok) cout << "YES\n";
            else cout << "NO\n";
        }
 
    }
}