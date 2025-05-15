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
ll a[N], b[N], c[N*2];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s;

stack<char> st;

bool check(string s){
    for(int i=0;i<s.size();++i){
        if(s[i]=='('||s[i]=='{'||s[i]=='[') st.push(s[i]);
        else {
            if(st.empty()) return false;
            else {
                char c = st.top();
                st.pop();
                if((s[i]==')'&&c!='(')||(s[i]==']'&&c!='[')||(s[i]=='}'&&c!='{')) return false;
            }
        }
    }
    return true;
    
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        if(check(s)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}