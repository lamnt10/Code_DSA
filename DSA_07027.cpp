#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >>  t;
    while (t--){
        int n;cin >> n;
        int a[n];
        for (int &x:a) cin >> x;
        stack<int> st;
        int tmp[n];
        for (int i=0;i<n;i++){
           while(!st.empty() && a[i]>a[st.top()]){
                tmp[st.top()]=a[i];
                st.pop();
           }
           st.push(i);
        }
        while (!st.empty()){
            tmp[st.top()]= -1;
            st.pop();
        }
        for (int x:tmp) cout << x << " ";
        cout << endl;   
    }
}