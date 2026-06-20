#include<bits/stdc++.h>
using namespace std;
int cur;
map<int,int> idx ;
struct node{
    int val;
    node *l=NULL,*r=NULL;
    node(int x){
        this->val=x;
    }
};
int pre[1005],in[1005];
node* nd(int l,int r) {
    if(l>r) return NULL;
    node *root=new node(pre[cur]);
    int m=idx[pre[cur]];cur++;
    root->l=nd(l,m-1);
    root->r=nd(m+1,r);
    return root;
}
void print(node *root){
    if(root==NULL) return;
    print(root->l);
    print(root->r);
    cout << root->val <<" ";
}
int main(){
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        for(int i=0;i<n;i++){
            cin >> in[i];
            idx[in[i]]=i;
        }
        for(int i=0;i<n;i++){
            cin >> pre[i];
        }
        cur=0;
        node *root=nd(0,n-1);
        print(root);
        idx.clear();
        cout << endl;
    }
}
