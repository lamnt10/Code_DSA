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
node* build(int l,int r){
    if(l>r) return NULL;
    node *root=new node(a[l]);
    int i=l+1;
    while(i<n && a[i]< a[l]) i++;
    root->l=build(l+1,i-1);
    root->r=build(i,r);
    return root;
}
void postOrder(node *root){
    if(root==NULL) return;
    postOrder(root->l);
    postOrder(root->r);
    cout << root->val << " "; 
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        node *root = build(0,n-1);
        postOrder(root);
        cout << endl;
    }
}