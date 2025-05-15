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
string s1;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        queue<string> q;
        q.push("6");
        q.push("8");
        vector<string> ans;
        while(1){
            string x = q.front();
            q.pop();
            if(x.size()>n) break;
            ans.push_back(x);
            q.push(x+"6");
            q.push(x+"8");
        }
        for(int i = ans.size()-1;i>=0;--i){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        ans.clear();
    }
}