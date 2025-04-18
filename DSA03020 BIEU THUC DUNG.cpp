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

int t,n,x;
ll a[N], b[N];
vector<ll> v;
vector<vector<int>> vv;
bool kt = false;
string s;
vector<string> vs;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        
        cin>>s;
        int cnt = 0, cost = 0;
        for(int i=0;i<s.size();++i){
            if(s[i]=='[') ++cnt;
            else if(s[i]==']') --cnt;
            
            if(cnt < 0){
                for(int j = i+1;j<s.size();++j){
                    if(s[j]=='[') {
                        cost += j-i;
                        swap(s[i], s[j]);
                        cnt = 1;
                        break;
                    }
                }
            }
        }
        cout<<cost<<endl;
    }
    
}