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

int n;
int a[10005];

bool kt=false;

void in(){
    for(int i=1;i<=n;++i){
        a[i]=i;
    }
}

void sinh(){
    int i=n-1;
    while(a[i]<a[i+1]) --i;
    if(i==0) kt=true;
    else {
        int j=n;
        while(a[j]>a[i]) --j;
        swap(a[i],a[j]);
        reverse(a+i+1,a+n+1);
    }
}



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        in();
        do{
            for(int i=1;i<=n;++i){
                cout<<a[i];
            }
            cout<<" ";
        

        } while(next_permutation(a+1,a+n+1));
        cout<<endl;
    }
    return 0;
}