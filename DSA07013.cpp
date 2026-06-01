#include <bits/stdc++.h>
using namespace std;
int tinh(int a,int b,char c){
	if (c=='+') return a+b;
	if (c=='-') return a-b;
	if (c=='*') return a*b;
	if (c=='/') return a/b;
}
int main(){
	int t;cin >> t;
	while (t--){
		string s;cin >> s;
		stack<int> st;
		for (int i=0;i<s.length();i++){
			if (s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
				int a,b;
				a=st.top();st.pop();
				b=st.top();st.pop();
				st.push(tinh(b,a,s[i]));
			}
			else st.push(s[i]-'0');
		
		}
		cout << st.top() << endl;
	}
}