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

void ktao(){
    for(int i=1;i<=k;++i){
        a[i]=i;
    }
}

bool kt=false;

void tao(){
    int i=k;
    while(a[i]==n-k+i&&i>=1){
        --i;
    }
    if(i==0) kt=true;
    else {
        a[i]++;
        for(int j=i+1;j<=k;++j){
            a[j]=a[j-1]+1;
        }
    }


}

void sinh(){
    cin>>n>>k;
    ktao();
    kt=false;
    while(!kt){
        for(int i=1;i<=k;++i){
            cout<<a[i];
        }
        cout<<" ";
        tao();
    }
    cout<<endl;

}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        sinh();
    }
}