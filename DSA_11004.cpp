#include<bits/stdc++.h>
using namespace std;
int par,chi;
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
        if(c=='L') {
            root->l=new node(chi);
        }
        else root->r=new node(chi);
    }
    else{
        build(root->l);
        build(root->r);
    }
}
void levelOrder(node *root){
    queue<node*> q;
    q.push(root);
    while(!q.empty()){
        node *tmp=q.front();
        q.pop();
        if(tmp->l != NULL) q.push(tmp->l);
        if(tmp->r != NULL) q.push(tmp->r);
        cout << tmp->val << " ";
     }
}
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        node *root=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root==NULL) {
                root=new node(par);
            }
            build(root);
        }
        levelOrder(root);
        cout << endl;

    }
}