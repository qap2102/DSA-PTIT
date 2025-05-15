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
        for(int i=0;i<n;++i) cin>>a[i];
        stack<ll> st1;
        for(int i=n-1;i>=0;--i){
            while(!st1.empty()&&a[i]>=a[st1.top()]){
                st1.pop();
            }
            if(st1.empty()) b[i]=-1;
            else b[i]=st1.top();
            st1.push(i);
        }
        stack<ll> st2;
        for(int i=n-1;i>=0;--i){
            while(!st2.empty()&&a[i]<=a[st2.top()]){
                st2.pop();
            }
            if(st2.empty()) c[i]=-1;
            else c[i]=st2.top();
            st2.push(i);
        }
        for(int i=0;i<n;++i){
            if(b[i]==-1) cout<<"-1"<<" ";
            else {
                if(c[b[i]]==-1) cout<<"-1"<<" ";
                else cout<<a[c[b[i]]]<<" ";
            }
        }

        

        

        cout<<endl;
        
    }
}