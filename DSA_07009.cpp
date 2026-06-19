#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        stack<string> st;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]!='+' && s[i]!='-' && s[i]!='*' && s[i]!='/' ) {
                string tmp;
                tmp=s[i];
                st.push(tmp);
            }
            else{
                string kq="";
                string a=st.top();st.pop();
                string b=st.top();st.pop();
                kq=kq+"(" + a + s[i] +b +")";
                st.push(kq);
            }
        }
        cout << st.top() << endl;
    }
}