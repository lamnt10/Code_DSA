#include<bits/stdc++.h>
using namespace std;
int n,m,par,chi;
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
bool check(node *root1,node *root2){
    if(root1==NULL && root2 == NULL) return true;; 
    if (root1 == NULL || root2 == NULL || root1->val != root2->val) {
        return false;
    }
    else return check(root1->l,root2->l) && check(root1->r,root2->r);
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        node *root1=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root1==NULL) root1=new node(par);
            build(root1);
        }
        cin >> m;
        node *root2=NULL;
        while(m--){
            cin >> par >> chi >> c;
            if(root2==NULL) root2=new node(par);
            build(root2);
        }
        if(check(root1,root2)) cout << 1 << endl;
        else cout << 0 << endl;
    }
}