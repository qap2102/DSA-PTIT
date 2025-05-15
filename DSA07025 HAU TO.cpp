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
        cin>>n;
        vector<string> vs;
        for(int i=0;i<n;++i){
            cin>>s;
            vs.push_back(s);
        }
        stack<ll> st;
        for(string s1 : vs){
            
            if(s1.size()==1 && (s1 == "+"||s1=="-"||s1=="*"||s1=="/")){
            	ll a = st.top();
            	st.pop();
            	ll b = st.top();
            	st.pop();
            	ll x = 0;
            	if(s1 == "+") x = a+b;
            	else if(s1=="-") x = b - a;
            	else if(s1=="*") x = b * a;
            	else if(s1=="/") x = b / a;
            	st.push(x);
			}
			else st.push(stoi(s1));
        }
        cout << st.top() << endl;
    }
}
