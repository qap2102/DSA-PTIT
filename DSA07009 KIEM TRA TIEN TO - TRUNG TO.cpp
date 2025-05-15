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
        stack<string> st;
        string s1 = "";
        string s2 = "";
        for(int i=s.size()-1;i>=0;--i){
            if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'){
                string tmp = "";
                tmp += s[i];
                st.push(tmp);
            }
            else{
                s1 = st.top();
                st.pop();
                s2 = st.top();
                st.pop();
                string s3 = "(" + s1 + s[i] + s2 + ")";
                st.push(s3);
                
            }
            
        }
        cout<<st.top()<<endl;
    }
}