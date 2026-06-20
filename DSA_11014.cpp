#include<bits/stdc++.h>
using namespace std;
int n,par,chi;
char c;
int kq;
struct node{
    int val;
    node *l=NULL,*r=NULL;
    node(int x){
        this->val=x;
    }
};
void build(node *root){
    if(root==NULL) return;
    if(root->val==par){
        if(c=='L') root->l=new node(chi);
        else root->r=new node(chi);
    }
    else{
        build(root->l);
        build(root->r);
    }
}
bool isleaf(node *root){
    if(root->l == NULL && root->r == NULL ) return true;
    return false;
}
int calc(node *root){
    int sum=0;
    if(root==NULL) return sum;
    if(root->r !=NULL && isleaf(root->r)) sum+=root->r->val;
    if(root->r !=NULL && !isleaf(root->r)) sum+=calc(root->r);
    if(root->l !=NULL && !isleaf(root->l)) sum+=calc(root->l);
    return sum;
}
int main(){
    int t;cin >> t;
    while(t--){
        kq=0;
        cin >> n;
        node*root=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root==NULL) root=new node(par);
            build(root);
        }
        
        cout << calc(root) << endl;
    }
}