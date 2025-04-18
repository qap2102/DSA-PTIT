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
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

vector<int> v1(5);

void Try(int i, int sum){
    if(kt) return;
    if(i>4) return;
    if(i==4){
        if(sum==23) kt = true;
        return;
    }
    Try(i+1, sum+v1[i+1]);
    Try(i+1, sum-v1[i+1]);
    Try(i+1, sum*v1[i+1]);
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        for(int i=0;i<5;++i) cin>>v1[i];
        kt = false;
        sort(v1.begin(),v1.end());
        while(next_permutation(v1.begin(),v1.end())&&!kt){
            Try(0, v1[0]);
            
        }
        if(kt) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}