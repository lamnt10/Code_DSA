#include<bits/stdc++.h>
using namespace std;
int n,par,chi;
char c;
struct node{
    int val,lev;
    node *l=NULL,*r=NULL,*p=NULL;
    node(int x,int l){
        this->val=x;
        this->lev=l;
    }
};
void build(node *root){
    if(root==NULL) return;
    if(root->val==par) {
        if(c=='L'){
            node *tmp=new node(chi,root->lev+1);
            tmp->p=root;
            root->l=tmp;
        }
        else{
            node *tmp=new node(chi,root->lev+1);
            tmp->p=root;
            root->r=tmp;
        }
        return;
    }
    build(root->l);
    build(root->r);
}
vector<node*> lea;
void travelsal(node *root){
    if(root==NULL) return;
    if(root->l==NULL && root->r == NULL) lea.push_back(root);
    travelsal(root->l);
    travelsal(root->r);
}
int su(node *a,node *b){
    int sum=0;
    while(a!=b){
        if(a->lev > b->lev){
            sum+=a->val;
            a=a->p;
        }
        else if(a->lev < b->lev){
            sum+=b->val;
            b=b->p;
        }
        else{
            sum=sum+a->val+b->val;
            a=a->p;
            b=b->p;
        }
    }
    sum+=a->val;
    return sum;
}

int main(){
    int t;cin >> t;
    while(t--){
        lea.clear();
        cin >> n;
        node *root=NULL;
        while(n--){
            cin >> par >> chi >> c;
            if(root==NULL){
                root=new node(par,0);
            }
            build(root);
        }
        travelsal(root);
        int ans=-1e9;
        for(int i=0;i<lea.size();i++){
            for(int j=i+1;j<lea.size();j++){
                ans=max(ans,su(lea[i],lea[j]));
            }
        }
        cout << ans << endl;
        
    }
}