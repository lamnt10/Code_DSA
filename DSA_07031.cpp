#include <bits/stdc++.h>
using namespace std;
long long tinhtoan(long long a,long long b ,string tmp){
    if (tmp=="+") return a+b;
    if (tmp=="-") return a-b;
    if (tmp=="*") return a*b;
    if (tmp=="/") return a/b;
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        cin.ignore();
        string s;
        getline(cin , s);
        stringstream ss (s);
        string word;
        stack<string> st1;
        while (ss >> word){
            st1.push(word);
        }
        s="";
        stack <long long> st2;
        while (!st1.empty()){
            string tmp=st1.top();
            if (tmp == "+" ||tmp == "-" ||tmp == "*" ||tmp == "/" ){
                long long a=st2.top(); st2.pop();
                long long b=st2.top(); st2.pop();
                st2.push(tinhtoan(a,b,tmp));
            }
            else st2.push(stoll(tmp));
            st1.pop();
        }
        cout << st2.top() << endl;
        
    }
}