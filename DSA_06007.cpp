#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        int l=0,r=n-1;
        while (r>0 && a[r]>a[r-1]) r--;
        while (l<n-1 && a[l]<a[l+1]) l++;
        int min1=a[l],max1=a[l];
        for(int i=l;i<=r;i++){
            min1=min(min1,a[i]);
            max1=max(max1,a[i]); 
        }
        for(int i=0;i<n;i++){
            if(a[i]>min1){
                cout << i+1 << " ";
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(a[i]<=max1)
            {
                cout << i+1 << endl;
                break;
            }
        }
    }

}