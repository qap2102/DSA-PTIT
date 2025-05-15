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
        cin>>s;
        stack<char> st;
        x=0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='(') st.push(s[i]);
            else if(s[i]==')'){
                if(!st.empty()){
                    x+=2;
                    st.pop();
                }
            }
        }
        cout<<x<<endl;
    }
}