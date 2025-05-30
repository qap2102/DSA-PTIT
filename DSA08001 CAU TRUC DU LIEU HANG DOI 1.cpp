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
        cin>>n;
        queue<ll> q;
        while(n--){
            cin>>x;
            if(x==1){
                cout<<q.size()<<endl;
            }
            else if(x==2){
                if(q.empty()){
                    cout<<"YES"<<endl;
                }
                else cout<<"NO"<<endl;
            }
            else if(x==3){
                cin>>k;
                q.push(k);
            }
            else if(x==4){
                if(!q.empty()){
                    q.pop();
                }

            }
            else if(x==5){
                if(q.empty()){
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<q.front()<<endl;
                }
            }
            else if(x==6){
                if(q.empty()){
                    cout<<"-1"<<endl;
                }
                else{
                    cout<<q.back()<<endl;
                }
            }
        }
    }
}