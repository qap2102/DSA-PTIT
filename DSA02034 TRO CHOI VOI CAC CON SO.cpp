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
int a[N];

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;++i) 
        for(int i=0;i<n;++i){
            a[i]=i+1;
        }
        do{
            bool kt=true;
            for(int i=0;i<n-1;++i){
                if (abs(a[i]-a[i+1])==1){
                    kt=false;
                    break;
                }
            }
            if(kt) {
                for(int i=0;i<n;++i){
                    cout<<a[i];
                }
                cout<<endl;
            }
        }while(next_permutation(a,a+n));
    }
}

