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
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i]; // lưu chiều cao của các cột
        stack<pair<ll,ll>> st1; // tìm phần tử nhỏ hơn bên trái
        ll l[n];
        for(int i=0;i<n;++i){
            while(st1.size()&&st1.top().fi>=a[i]){
                st1.pop();
            }
            if(st1.empty()) l[i]=-1;
            else l[i]=st1.top().se;
            st1.push({a[i],i});
        }
        // for(int i=0;i<n;++i){
        //     cout<<l[i]<<" ";
        // }
        // cout<<endl;
        ll r[n];
        stack<pair<ll,ll>> st2;
        for(int i=n-1;i>=0;--i){
            while(st2.size()&&st2.top().fi>=a[i]){
                st2.pop();
            }
            if(st2.empty()) r[i]=n;
            else r[i]=st2.top().se;
            st2.push({a[i],i});
        }
        x=0;
        for(int i=0;i<n;++i){
            x=max(x,a[i]*(r[i]-l[i]-1));
        }
        cout<<x<<endl;

        
    }
}