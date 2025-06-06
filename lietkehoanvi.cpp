#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fi first
#define se second
const int MOD = 1e9+7;
const int N=1e6+5;

int t,n,m;

int a[15], check[15];

void Try(int j){
    for(int i=1;i<=n;++i){
        if(!check[i]){
            check[i]=1;
            a[j]=i;
            if(j==n){
                if(a[n]==m){
                    for(int k=1;k<=n;++k){
                    cout<<a[k]<<" ";
                }
                    cout<<endl;
                }
                
            }
            else  Try(j+1);
            check[i]=0;
        }
    }
}

int main(){
    faster;
    cin>>n>>m;
    Try(1);

}