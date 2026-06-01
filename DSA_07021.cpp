#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        string s;cin >> s;
        stack<int> st;
        st.push(-1);
        int count = 0;
        for (int i=0;i<s.length();i++){
            if (s[i]=='(') st.push(i);
            else {
                st.pop();
                if (st.size()>0){
                    count = max(count, i-st.top());
                }
                else st.push(i);
            }
        }
        cout << count << endl;
    }
}