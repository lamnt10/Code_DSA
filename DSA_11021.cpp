#include<bits/stdc++.h>
using namespace std;
int a[1005],n;
struct node{
    int val;
    node *l=NULL,*r=NULL;
    node(int x){
        this->val=x;
    }
};
map<int,bool> mp;
void build(node *&root,int val){
    if(root==NULL){
        mp[val]=1;
        root=new node(val);
    }
    else{
        mp[root->val]=0;
        if(root->val >val) build(root->l,val);
        else build(root->r,val);
    }
}
int main(){
    int t;cin >> t;
    while(t--){
        cin >> n;
        node *root=NULL;
        for(int i=0;i<n;i++) {
            cin >> a[i];
            build(root,a[i]);
        }
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(mp[a[i]]==1){
                cout << a[i] << " ";
            }
        }
        cout << endl;

    }
}