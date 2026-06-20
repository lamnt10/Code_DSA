#include<bits/stdc++.h>
using namespace std;
int n,par,chi;
char c;
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
bool ktra(node *root){
    if(root==NULL) return true;
    if((root->l==NULL && root->r!=NULL) ||(root->l!=NULL && root->r==NULL)) return false;
    else return ktra(root->l) && ktra(root->r);
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        node *root=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root==NULL) root=new node(par);
            build(root);
        }
        cout << ktra(root);
        cout << endl;

    }
}