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

pair<ll,ll> p; // fi lưu giá trị hiện tại, se lưu số bước

queue<pair<ll,ll>> q;

map<ll,bool> mp;




int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        q = queue<pair<ll,ll>>();
        cin>>n>>k;
        mp.clear();
        q.push({n,0});
        
        mp[n]=true;

        while(1){
            p=q.front();
            q.pop();
            if(p.fi==k){
                cout<<p.se<<endl;
                break;
            }
            if(p.fi<k&&!mp[p.fi*2]){
                mp[p.fi*2]=true;
                q.push({p.fi*2,p.se+1});
            }

            if(p.fi-1>0&&!mp[p.fi-1]){
                mp[p.fi-1]=true;
                q.push({p.fi-1,p.se+1});
            }

        }


    }
}