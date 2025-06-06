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



int a[15];

int main(){
    faster;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;++i){
        v[i]=i+1;
    }
    do{

        int tmp=0;
        for(int i=0;i<n-1;++i){
            tmp = tmp + (v[i]-v[i+1]);
        }

        if(tmp>0){
            for(int i=0;i<n;++i){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

    }while(next_permutation(v.begin(),v.end()));
}