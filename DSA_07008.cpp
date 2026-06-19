#include <bits/stdc++.h>
using namespace std;
int ss (char x){
	if (x=='^' ) return 3;
	if (x=='+'||x=='-') return 1;
	if (x=='*'||x=='/') return 2;
	return 0;
}
void bailam(string s){
	
	string tmp="";
	stack<char> st;
	for (int i=0;i<s.length();i++){
		if (isalpha(s[i])) tmp+=s[i];
		else if (s[i]=='(') st.push(s[i]);
		else if (s[i]==')'){
			while (!st.empty() && st.top()!='('){
				tmp+=st.top();
				st.pop();
			}
			st.pop();
		}
		else {
			while (!st.empty() && ss(st.top()) >= ss(s[i])){
				tmp+=st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		
	}
	while (!st.empty()){
			tmp+=st.top();
			st.pop();
		}
	cout << tmp << endl;
}
int main(){
	int t;cin >> t;
	while (t--){
		string s;cin >>s ;
		bailam(s);
	}	
}