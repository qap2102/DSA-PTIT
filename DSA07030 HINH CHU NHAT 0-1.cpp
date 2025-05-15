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
const int N=505;

ll t,n,x,k;
ll a[N][N], b[N], c[N];
vector<ll> v;
vector<vector<ll>> vv;
bool kt = false;
string s,s1;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>x;
        ll tmp=0;
        for(int i=1;i<=n;++i){
            for(int j=1;j<=x;++j){
                cin>>a[i][j];
                if(a[i][j]) a[i][j] += a[i-1][j];
            }
            stack<ll> st,st1;
            for(int j=1;j<=x;++j){
                while(!st.empty() && a[i][j] <= a[i][st.top()]) st.pop();
                if(st.empty()) b[j] = 0;
                else b[j] = st.top()+1;
                st.push(j);
            }

            for(int j=x;j>=1;--j){
                while(!st1.empty() && a[i][j] <= a[i][st1.top()]) st1.pop();
                if(st1.empty()) c[j] = x;
                else c[j] = st1.top()-1;
                st1.push(j);
            }

            for(int j=1;j<=x;++j){
                tmp = max(tmp,(c[j]-b[j]+1)*a[i][j]);
            }

        }
        // for(int i=1;i<=n;++i){
        //     for(int j=1;j<=x;++j){
        //         cout<<a[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }

        

        cout<<tmp<<endl;

    }
}