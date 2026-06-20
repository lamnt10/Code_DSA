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
        if(c=='L' ) root->l=new node(chi);
        else root->r= new node(chi);
    }
    else{
        build(root->l);
        build(root->r);
    }
}
void duyet(node *root){
    stack<node*> st1,st2;
    st1.push(root);
    while(!st1.empty() || !st2.empty())
    {
        while(!st1.empty()){
            node *tmp=st1.top();
            st1.pop();
            if(tmp->r!=NULL) st2.push(tmp->r);
            if(tmp->l!=NULL) st2.push(tmp->l);
            cout << tmp->val << " ";
        }
        while(!st2.empty()){
            node*tmp=st2.top();
            st2.pop();
            if(tmp->l!=NULL) st1.push(tmp->l);
            if(tmp->r!=NULL) st1.push(tmp->r);
            cout << tmp->val << " ";
        }
    }
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
        duyet(root);
        cout << endl;
    }
}