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
int a[55];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.se!=b.se) return a.se<b.se;
    return a.fi<b.fi;
}



int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        pair<int,int> a[n];
        for(int i=0;i<n;++i){
            cin>>a[i].fi>>a[i].se;
        }
        

        sort(a,a+n,cmp);
        int cnt=1;

        int l = a[0].fi;
        int r = a[0].se;

        for(int i=1;i<n;++i){
            if(a[i].fi>=r){
                l = a[i].fi;
                r = a[i].se;
                cnt++;
            }
        }

        cout<<cnt<<endl;
    }
}