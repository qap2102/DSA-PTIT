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
int a[10005];

bool kt=false;

void in(){
    for(int i=1;i<=n;++i){
        a[i]=0;
    }
}

void sinh(){
    int i=n;
    while(a[i]==1 && i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) kt=true;
    else a[i]=1;
}

bool check(int a[]){

    int cnt=0;
    for(int i=1;i<=n;++i){
        if(a[i]) cnt++;
    }
    return cnt==k;
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        in();
        kt=false;
        while(!kt){
            if(check(a)){
                for(int i=1;i<=n;++i){
                    cout<<a[i];
                    
                }
                cout<<endl;
                
            }
            sinh();
        }
        
    }
    return 0;
}