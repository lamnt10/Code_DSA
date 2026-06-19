#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        string s;cin >> s;
        stack<string> st;
        for(char x:s){
            if(isalpha(x)) {
                string tmp;
                tmp=x;
                st.push(tmp);
            }
            else{
                string b=st.top();st.pop();
                string a=st.top();st.pop();
                string kq="";
                kq=kq+"("+a+x+b+")";
                st.push(kq);
            }
        }
        cout << st.top() << endl;
    }
}