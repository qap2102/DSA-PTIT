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
        queue<ll> q;
        q.push(9);
        while(1){
            if(q.front()%n==0){
                cout<<q.front()<<endl;
                break;
            }
            else {
                q.push(q.front()*10);
                q.push(q.front()*10+9);
                q.pop();
            }
        }
    }
}