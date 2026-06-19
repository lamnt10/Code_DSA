#include <iostream>
#include <stack>
using namespace std;
string check(string s){
	stack<char> st;
	for (auto x:s){
		if (x!=')') st.push(x);
		else {
			bool ok=1;
			while (st.top()!='('){
				char tmp=st.top();
				if (tmp=='+' ||tmp=='-'||tmp=='*'||tmp=='/') ok=0;
				st.pop();
			}
			if (ok) return "Yes";
			st.pop();
		}
	}
	return "No";
}
int main(){
	int t;cin >> t;
	
	while (t--){
		string s;cin >> s;
		cout << check(s) <<endl;
		
	}
}