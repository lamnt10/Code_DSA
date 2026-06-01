#include <bits/stdc++.h>

using namespace std;
long long tinhtoan(long long a,long long b,string tmp){
    if (tmp == "+") return b+a;
    if (tmp == "-") return b-a;
    if (tmp == "*") return b*a;
    if (tmp == "/") return b/a;
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        string s;stack<long long> st;
        for (int i=0;i<n;i++){
            cin >> s;
            if (s=="+" || s=="-" || s=="*" || s=="/"){
                long long a=st.top(); st.pop();
                long long b=st.top(); st.pop();
                long long c=tinhtoan(a,b,s);
                st.push(c);
            }
            else st.push(stoll(s));
        }
        cout << st.top() << endl;
    }
}