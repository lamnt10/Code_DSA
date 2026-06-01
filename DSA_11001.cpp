#include <bits/stdc++.h>
using namespace std;
struct node{
    char val;
    node *left,*right;
    node(char x){
        val=x;
        left=right=NULL;
    }
};
bool check(char c){
    return c=='+' || c=='-' || c=='*' || c=='/';
}
void inorder(node *root){
    if (root==NULL) return;
    inorder(root->left);
    cout<<root->val <<" ";
    inorder(root->right);
}
void solve (string s){
    stack<node* > st;
    node *root;
    for (int i=0;i<s.length();i++){
        if (!check(s[i])){
            st.push(new node(s[i]));
        }
        else {
            node *tmp=new node(s[i]);
            node *n1 = st.top();
            st.pop();
            node *n2 = st.top();
            st.pop();
            tmp->left = n2;
            tmp->right = n1;
            st.push(tmp);
            }
    }
    root = st.top();
    inorder(root);
}
int main(){
    int t;cin >> t;
    while (t--){
        string s;cin >> s;
        solve(s);
        cout << endl;
    }
}