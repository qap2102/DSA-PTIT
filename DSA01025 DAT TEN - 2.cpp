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
const int N=1e5+5;


int n,k;
int a[20];
bool kt=false;

void in(int n){
    for(int i=1;i<=n;++i){
        a[i]=i;
    }
}

void sinh(){
    int i=k;
    while(a[i] == n - k + i) --i;
    if(i==0) kt=true;
    else {
        a[i]++;
        for(int j=i+1;j<=k;++j){
            a[j] = a[j-1] + 1; 
        }
    }
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        in(n);
        kt=false;
        while(!kt){
            char c='A';
            string s="";
            for(int i = 1; i <= k; i++){
        
                s += (char)(c + a[i] - 1);
            }
            cout << s << "\n";
            sinh();
        }
    }
}