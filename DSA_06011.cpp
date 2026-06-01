#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        int i=0;int j=n-1;
        int kq=1e9;
        while (i<j){
            int sum=a[i]+a[j];
            if(abs(kq)>abs(sum)) kq=sum;
            if(abs(kq)==abs(sum)) kq=min(kq,sum);
            if(sum<0) i++;
            else j--;
        }
        cout << kq << endl;
    }
}