#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while (t--){
        string s; cin >> s;
        stack<string> st;
        
        for (int i=0;i<s.length();i++){
            
            if (isalpha(s[i])){
                st.push(string(1,s[i]));
            }
            else {
                string b=st.top(); st.pop();
                string a=st.top(); st.pop();
                string kq="";
                kq+=s[i]+a+b;
                st.push(kq);
            }
        }
        cout << st.top() << endl;
    }
}