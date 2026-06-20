#include<bits/stdc++.h>
using namespace std;
struct node{
    char d;
    node *left,*right;
    node(char c){
        this->d = c;
    }
};
void inOrder(node *root){
    if(root==NULL) return;
    inOrder(root->left);
    cout << root->d ;
    inOrder(root->right);
}

int main(){
    int t;cin >> t;
    while(t--){
    string s;cin >> s;
    stack<node*> st;
    for(char c:s){
        if(isalpha(c)){
            st.push(new node(c));
        }
        else{
            node *r=st.top();st.pop();
            node *l=st.top();st.pop();
            node *tmp=new node(c);
            tmp->left=l;
            tmp->right=r;
            st.push(tmp);
        }
    }
    inOrder(st.top());
    cout << endl;
    }


}