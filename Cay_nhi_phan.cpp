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
//tao node cho cay
void makenode(node *root, int u,int v,char c){
    if (c=='L') root->left= new node(v);
    if (c=='R') root->right= new node(v);
}
//ham them mot node vao cay
void insert(node *root, int u,int v,char c){
    if (root==NULL) return;
    if (root->val == u){
        makenode(root,u,v,c);
    }
    insert(root->left , u,v,c);
    insert(root->right, u,v,c);
}
int main(){
    // xay dung cay nhi phan voi cu phap u,v,c voi v la con cua u, c la L hoac R
    int t;cin >> t;
    while (t--){
        int n;cin>> n;
        node* root = NULL;
        while (n--){
            int u,v; char c;
            cin >> u>>v>>c;
            if (root==NULL) {
                root = new node(u);
                makenode(root,u,v,c);
            }
            else {
                insert(root,u,v,c);
            }
        }
    }
}