#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        long long n;cin >> n;
        queue<long long> qu;
        qu.push(9);
        while(qu.front()%n){
            long long x=qu.front();
            qu.pop();
            qu.push(x*10);
            qu.push(x*10+9);
        }
        cout << qu.front() << endl;
    }
}