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

map<char,int> mp;

priority_queue<int> pq;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        mp.clear();
        cin>>n;
        cin>>s;
        for(char i:s){
            mp[i]++;
        }
        for(auto i:mp){
            pq.push(i.se);
        }
        while(!pq.empty()&&n){
            x = pq.top();
            pq.pop();
            --x;
            if(x) pq.push(x);
            --n;
        }
        k=0;
        while(!pq.empty()){
            x = pq.top();
            pq.pop();
            k += x*x;
        }
        cout<<k<<endl;

    }
}