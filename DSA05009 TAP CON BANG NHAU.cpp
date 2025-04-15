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

int n,k;
int a[105];
vector<int> v;
bool kt = false;

void Try(int start, int sum1){
    if(kt) return;
    for(int j = start;j<n;++j){
        v.push_back(a[j]);
        if(sum1+a[j]<=k) Try(j, sum1+a[j]);
        v.pop_back();
    }
    if(sum1==k){
        kt = true;
    }
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        kt = false;
        cin>>n;
        int sum=0;
        for(int i=0;i<n;++i){
            cin>>a[i];
            sum+=a[i];
        }
        
        if(sum&1) cout<<"NO"<<endl;
        else {
            k = sum/2;
            Try(0,0);
            if(kt) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

    }
}