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

queue<string> q;

int main(){
    faster;
    cin>>t;
    while(t--){
        q.push("1");
        cin>>n;
        int cnt=0;
        while(1){
            s = q.front();
            q.pop();

            if(stoll(s)%n==0){
                cout<<s<<endl;
                break;
            }
            q.push(s + "0");
            q.push(s + "1");
        }
        while(!q.empty()){
            q.pop();
        }


        
    }
}
