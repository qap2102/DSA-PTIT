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

int t,n,k;

int cnt[50];
int fib[50];


void fibo(){
    fib[0]=1;
    fib[1]=1;
    cnt[0]=1;
    cnt[1]=0;
    for(int i=2;i<=50;++i){
        fib[i] = fib[i-1] + fib[i-2];
        cnt[i] = cnt[i-1] + cnt[i-2];
    }

}

int count(int n, int k){
    if(n==0) return 1;
    if(n==1) return 0;
    if(k<=fib[n-1]) return count(n-1,k);
    return cnt[n-1] + count(n-2,k-fib[n-1]);
}



int main(){
    faster;
    fibo();
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>k;
        cout<<count(n,k)<<endl;
    }
}