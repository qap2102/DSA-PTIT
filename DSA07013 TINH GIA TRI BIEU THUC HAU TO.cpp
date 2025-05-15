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

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>s;
        stack<char> st;
        char s1 = ' ';
        char s2 = ' ';
        for(int i=0;i<s.size();++i){
            if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'){
                st.push(s[i]);
            }
            else {
                s1 = st.top();
                st.pop();
                s2 = st.top();
                st.pop();
                int tmp = 0;
                if(s[i]=='+') {
                    tmp = (s1-'0') + (s2-'0');
                }
                else if(s[i]=='-') {
                    tmp = (s2-'0') - (s1-'0');
                }
                else if(s[i]=='*') {
                    tmp = (s2-'0') * (s1-'0');
                }
                else if(s[i]=='/') {
                    tmp = (s2-'0') / (s1-'0');
                }
                st.push(tmp+'0');
                k = tmp;
            }
        }
        cout<<k<<endl;
    }
}