#include <bits/stdc++.h>
using namespace std;
int main(){
	int q;cin >> q;
	string s;int n;
	stack<int> st;
	while (q--){
		cin >> s;
		if (s=="PUSH"){
			cin >> n;
			st.push(n);
		}	
		if (s=="PRINT"){
			if (!st.empty()) cout << st.top() << endl;
			else cout <<"NONE"<<endl;
		}
		if (s=="POP"){
			if (!st.empty()) st.pop();
		}
	}
}