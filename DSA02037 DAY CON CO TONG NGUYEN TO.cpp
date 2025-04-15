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

int t,n,x;
int a[25];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

string tmp="";
vector<string> s1;

bool nt(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0) return false;
    }
    return n>1;
}

void Try(int i, int sum, vector<int> v){
    for(int j=i+1;j<n;++j){
        sum+=a[j];
        v.push_back(a[j]);
        if(nt(sum)) vv.push_back(v);
        Try(j,sum,v);
        sum-=a[j];
        v.pop_back();
    }
}


int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        v.clear();
        vv.clear();
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];

        sort(a,a+n,greater<int>());
        vector<int> v1;
        Try(-1,0,v1);

        sort(vv.begin(),vv.end());
        
        for(auto it:vv){
            for(int k:it) cout<<k<<" ";
            cout<<endl;
        }
        
    }
}