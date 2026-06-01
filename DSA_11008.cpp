#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left,*right;
    node(int x){
        val=x;
        left = right = NULL;
    }
};
void makenode (node *root, int u,int v,char c){
    if (c=='L') root->left = new node(v);
    if (c=='R') root->right = new node(v);
}
void insert(node *root,int u,int v,char c){
    if (root == NULL) return ;
    if (root->val == u) makenode(root,u,v,c);
    insert(root->left,u,v,c);
    insert(root->right,u,v,c);
}
int height(node *root){
    if (root == NULL) return 0;
    else  return 1 + max(height(root->left),height(root->right));
}
bool check(node *root,int level,int h){
    if (root == NULL) return true;
    if (root->left == NULL && root->right == NULL && level<h) return false;
    return check(root->left , level+1, h) && check(root->right,level+1,h); 
    
}
int main(){
    int t;cin >> t;
    while (t--){
      int n;cin>> n;
      node *root= NULL;
      while (n--){
        int u,v ;char c;
        cin >> u >> v >> c;
        if (root == NULL) {
            root = new node(u);
            makenode(root,u,v,c);
        }
        else {
            insert(root,u,v,c);
        }
      }  
      int h=height(root);
      if(check(root,1,h)) cout << 1 << endl;
      else cout << 0 << endl;
    }
}