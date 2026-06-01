#include <iostream>
#include <math.h>
using namespace std;
int n,k;
int prime[10000001];

void sang(){
	for(int i = 0; i <= 10000000; i++){
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= sqrt(10000000); i++){
		if(prime[i]){
			for(int j = i * i; j <= 10000000; j += i){
				prime[j] = 0;
			}
		}
	}
}
int check[1001];
int a[1001];
int cnt=0;
void back_track(int i){
    for(int j=a[i-1]+1;j<=n-k+i;j++){
        if(!check[j]){
            a[i]=j;
            check[j]=1;
            if(i==k){
                cnt ++;
                if(prime[cnt]){
                    cout << cnt << ": ";
                    for(int i=1;i<=k;i++){
                        cout << a[i]<< " ";
                    }
                    cout << endl;
                }
            }
            else back_track(i+1);
          check[j]=0;
        }
          
    }
}

int main(){
    cin >> n >> k;
	sang();
	back_track(1);
	return 0;
}