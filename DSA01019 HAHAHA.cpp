#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n;
bool kt=false;
int a[10005];

void nhap(){
    for(int i=1;i<=n;++i){
        a[i]=0;
    }
}

void sinh(){
    int i=n;
    while(a[i]==1&&i>=1){
        a[i]=0;
        --i;
    }
    if(i==0) kt=true;
    else a[i]=1;

}

bool check(int a[]){
    for(int i=1;i<=n;++i){
        if(a[i]==a[i+1]&&a[i]) return false;

    }
    return a[1]==1&&a[n]==0;
}

void solve(){
    cin>>n;
    nhap();
    kt=false;
    while(!kt){
        if(check(a)){
            for(int i=1;i<=n;++i){
                if(a[i]) cout<<'H';
                else cout<<'A';
            }
            cout<<endl;
        }
        sinh();
    }
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        
        solve();
    }
}