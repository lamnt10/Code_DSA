#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;cin >> t;
	while (t--){
		string s;cin >> s;
		stack<string> st;
		for (int i=s.length()-1;i>=0;i--){
			string tmp(1,s[i]);
			if (tmp=="+"||tmp=="-"||tmp=="/"||tmp=="*"){
				string tmp1,tmp2;
				tmp1=st.top();st.pop();
				tmp2=st.top(); st.pop();
				st.push(tmp1+tmp2+tmp);
			}
			else st.push(tmp);
		}
		cout << st.top()<< endl;
	}
}