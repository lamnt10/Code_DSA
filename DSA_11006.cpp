#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left,*right;
    node (int x){
        val=x;
        left=right=NULL;
    }
};
void makenode (node *root,int a,int b,char c){
    if (c=='L') root->left=new node(b);
    else root->right=new node(b);
}
void insert(node *root,int a,int b , char c){
    if (root == NULL) return ;
    if (root->val == a) makenode(root,a,b,c);
    else {
        insert(root->left,a,b,c);
        insert(root->right,a,b,c);
    }
}
void spiralorder(node *root){
    stack<node*> s1,s2;
    s1.push(root);
    while (!s1.empty() || !s2.empty()){
        while (!s1.empty()){
            node *tmp=s1.top();
            s1.pop();
            cout << tmp->val << " ";
            if (tmp->right!= NULL) s2.push(tmp->right);
            if (tmp->left!= NULL) s2.push(tmp->left);
        }
        while (!s2.empty()){
            node *tmp=s2.top();
            s2.pop();
            cout << tmp->val << " ";
            if (tmp->left !=NULL) s1.push(tmp->left);
            if (tmp->right !=NULL) s1.push(tmp->right);
        }
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        node *root=NULL;
        while (n--){
            int a,b;char c;
            cin >> a >> b >> c ;
            if (root==NULL) {
                root = new node(a);
                makenode(root,a,b,c);
            }
            else insert(root,a,b,c);
        }
        spiralorder(root);
        cout << endl;
    }
}