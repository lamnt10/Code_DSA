#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left,*right;
    node(int x){
        val=x;
        left=right=NULL;
    }
};
void makenode (node *root,int a,int b,char c){
    if (c=='L') root->left = new node(b);
    else root->right = new node(b); 
}
void insert(node *root,int a,int b,char c){
    if (root == NULL) return;
    if (root->val == a) makenode(root,a,b,c);
    else {
        insert(root->left,a,b,c);
        insert(root->right,a,b,c);
    }
}
void levelorder(node *root){
    queue<node *> q;
    q.push(root);
    while (!q.empty()){
        node *top=q.front();
        q.pop();
        cout << top->val << " ";
        if (top->left!=NULL) q.push(top->left);
        if (top->right!=NULL) q.push(top->right);
    }
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        node *root=NULL;
        while (n--){
            int a,b;char c;
            cin >>a>>b>>c;
            if (root==NULL){
                root = new node(a);
                makenode(root,a,b,c);
            }
            else {
                insert(root,a,b,c);
            }
        }
        levelorder(root);
        cout << endl;
    }
}