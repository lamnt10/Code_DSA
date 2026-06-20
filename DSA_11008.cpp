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
    else {
        build(root->l);
        build(root->r);
    }
}
bool ok;
int firstlev;
void travell(node *root,int lev){
    if(root==NULL) return;
    if(root->l==NULL && root->r == NULL) {
        if(firstlev==-1) firstlev=lev;
        else{
            if(firstlev!=lev) {
                ok=0;
                return;
            }
        }
    }
    else{
        travell(root->l,lev+1);
        travell(root->r,lev+1);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        node *root=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root==NULL){
                root=new node(par);
            }
            build(root);
        }
        ok=1,firstlev=-1;
        travell(root,1);
        if(ok) cout << 1 << endl;
        else cout << 0 << endl;
    }
}