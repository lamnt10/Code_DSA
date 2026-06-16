#include<bits/stdc++.h>
using namespace std;
int t,n,k;
int a[105];

int main(){
    cin >> t;
    while(t--){
        cin >> n >> k;
        set<int> s;
        for(int i=1;i<=k;i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int st=s.size();
        int pos=k;
        while(pos>=1 && a[pos]==n-k+pos) pos--;
        if(pos<1) {
            cout << k << endl;
            continue;
        }
        a[pos]++;
        s.insert(a[pos]);
        for(int i=pos+1;i<=k;i++){
            a[i]=a[i-1]+1;
            s.insert(a[i]);
        }
        cout << s.size()-st << endl;
    }
}