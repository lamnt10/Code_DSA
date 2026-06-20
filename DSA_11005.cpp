#include<bits/stdc++.h>
using namespace std;
int lev[1005],in[1005];
map<int,int> idx;
int n;
struct node{
    int val;
    node *l=NULL,*r=NULL;
    node(int x){
        this->val=x;
    }
};
node* build(int i,int l,int r){
    if(i>=n && l>r) return NULL;
    node *root = new node(lev[i]);
    int m=idx[lev[i]];
    root->l=build(2*i+1,l,m-1);
    root->r=build(2*i+2,m+1,r);
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
            cin >> in[i];
            idx[in[i]]=i;
        }
        for(int i=0;i<n;i++){
            cin >> lev[i];
        }
        node *root=build(0,0,n-1);
        postOrder(root);
        cout << endl;
        idx.clear();
    }
}