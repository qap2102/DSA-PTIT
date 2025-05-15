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

ll t,n,x,k;
ll a[N], b[N], c[N];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s,s1;

map<ll,ll> mp;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        mp.clear();
        cin>>n;
        for(int i=0;i<n;++i){
            cin>>a[i];
            mp[a[i]]++;
        }
        stack<ll> st;
        for(int i=n-1;i>=0;--i){
            while(!st.empty() && mp[st.top()]<=mp[a[i]]) st.pop();
            if(st.empty()) b[i]=-1;
            else b[i]=st.top();
            st.push(a[i]);
        }
        for(int i=0;i<n;++i) cout<<b[i]<<" ";
        cout<<endl;

    }

}