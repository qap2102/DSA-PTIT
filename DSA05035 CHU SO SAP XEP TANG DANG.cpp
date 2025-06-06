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

int t,n;
int dp[101][101];

void in(){
    for(int i=0;i<10;++i){
        dp[1][i]=1;
    }
    for(int i=2;i<=100;++i){ 
        for(int j=0;j<=9;++j){ 
            for(int k=0;k<=j;++k){
                dp[i][j] = (dp[i][j] + dp[i-1][k])%MOD;
            }
        }
    }
}

int main(){
    faster;
    in();
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        int sum=0;
        for(int i=0;i<=9;++i){
            sum = (sum%MOD + dp[n][i]%MOD)%MOD;
        }
        cout<<sum<<endl;
    }
}