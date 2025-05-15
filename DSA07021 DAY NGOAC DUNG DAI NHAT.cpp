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
        x=0;
        cin>>s;
        stack<ll> st;
        st.push(-1);
        for(int i=0;i<s.size();++i){
            if(s[i]=='(') st.push(i);
            else if(s[i]==')'){
                st.pop();
                if(st.empty()) st.push(i);
                else{
                    x = max(x,i-st.top());
                }
            }
        }
        cout<<x<<endl;
    }
}