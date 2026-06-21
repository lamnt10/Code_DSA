#include<bits/stdc++.h>
using namespace std;
struct node{
    int val;
    node *l=NULL,*r=NULL;
    node(int x){
        this->val=x;
    }
};
int a[1005],n;
void build(node *root, int x){
    if(x>root->val){
        if(root->r==NULL) root->r=new node(x);
        else build(root->r,x);
    }
    else{
        if(root->l==NULL) root->l=new node(x);
        else build(root->l,x);
    }
}
void preOrder(node *root){
    if(root==NULL) return ;
    cout << root->val << " ";
    preOrder(root->l);
    preOrder(root->r);
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        node *root=new node(a[0]);
        for(int i=1;i<n;i++){
            build(root,a[i]);
        }
        preOrder(root);
        cout << endl;
    }
}