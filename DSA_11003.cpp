#include <bits/stdc++.h>
using namespace std;
int search(int in[],int x,int n){
    for (int i=0;i<n;i++){
        if(in[i]==x) return i;
    }
    return -1;
}
void postorder(int in[],int pre[],int n){
    int root = search(in,pre[0],n);
    if (root != 0){
        postorder(in,pre+1,root);
    }
    if (root != n-1) postorder(in+root+1,pre+root+1,n-root-1);
    cout << pre[0] << " ";
}
int main(){
    int t;cin >> t ;
    while (t--){
        int n;cin >> n;
        int in[n],pre[n];
        for (int &x:in) cin >> x;
        for (int &x:pre) cin >> x;
        postorder(in,pre,n);
        cout << endl;
    }

}