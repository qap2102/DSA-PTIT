#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long


int n,k;
int a[20];

void in(){
    for(int i=1;i<=k;++i){
        cout<<(char)(a[i]+'A'-1);
    }
    cout<<endl;
    
}
void solve(int i){
    for(int j=a[i-1]+1;j<=n-k+i;++j){
        a[i]=j;
        if(i==k) in();
        else solve(i+1);
    }

}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        
        solve(1);
    }
}