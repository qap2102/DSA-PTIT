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
string s,s1;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        stack<string> st;
        for(int i=0;i<s.size();++i){
            if(isalpha(s[i])){
                string tmp = "";
                tmp += s[i];
                st.push(tmp);
            }
            else if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
                string a = st.top();
                st.pop();
                string b = st.top();
                st.pop();
                string tmp= "";
                tmp += s[i];
                tmp += b;
                tmp += a;
                st.push(tmp);
                
            }
        }
        cout<<st.top()<<endl;

    }
}