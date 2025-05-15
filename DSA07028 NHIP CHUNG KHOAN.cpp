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

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(int i=1;i<=n;++i) cin>>a[i];
        stack<ll> st;
        // tìm phần tửu lớn hơn a[i] ở bên trái
        for(int i=1;i<=n;++i){
            while(!st.empty() && a[st.top()]<=a[i]) st.pop();
            if(st.empty()) b[i]=i;
            else b[i]=i-st.top();
            st.push(i);
        }
        for(int i=1;i<=n;++i) cout<<b[i]<<" ";
        cout<<endl;
    }
}