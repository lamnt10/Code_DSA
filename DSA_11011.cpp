#include <bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *left , *right;
    node (int x){
        val=x;
        left = right = NULL;
    }
};
void makenode (node *root , int a,int b,char c){
    if (c=='L') root->left = new node(b);
    if (c=='R') root->right = new node(b);
}
void insert(node *root,int a,int b,char c){
    if (root == NULL) return;
    if (root->val == a) makenode (root,a,b,c);
    else{
        insert(root->left,a,b,c);
        insert(root->right,a,b,c);
    }
}
int height(node *root){
    if (root == NULL) return 0;
    else return 1+max(height(root->left),height(root->right));
}
bool check(node *root,int level,int h){
    if (root==NULL) return true;
    if (root->left == NULL && root->right == NULL && level<h) return false;
    return check(root->left , level+1, h) && check(root->right,level+1,h);
}
bool check2(node *root){
    if (root == NULL) return true;
    if ((root->left == NULL && root->right!=NULL) || (root->left!=NULL && root->right== NULL)) return false;
    return check2(root->left) && check2(root->right);
}
int main(){
    int t;cin >> t;
    while (t--){
        int n;cin >> n;
        node *root=NULL;
        while (n--){
            int a,b;char c;
            cin >> a >> b >> c;
            if (root==NULL){
                root = new node(a);
                makenode(root,a,b,c);
            }
            else insert(root,a,b,c);
        }
        int h=height(root);
        if (check2(root)) cout << 1 << endl;
        else cout << 0 <<endl;

    }
}