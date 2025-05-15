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
int n1,x1,k1;
ll a[N], b[N], c[N*2];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;

struct matx{
    ll d[15][15];
};

matx dx;

matx operator*(matx a, matx b){
    matx c;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            c.d[i][j]=0;
            for(int z=0;z<n;++z){
                c.d[i][j] = (c.d[i][j]+(a.d[i][z]*b.d[z][j])%MOD)%MOD;
            }
        }
    }
    return c;
}

matx mu(matx a, ll k){
    if(k==1) return a;
    if(k&1) return mu(a,k-1)*a;
    matx c = mu(a,k/2);
    return c*c;
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>k;
        for(int i=0;i<n;++i){
            for(int j=0;j<n;++j){
                cin>>dx.d[i][j];
            }
        }
        dx = mu(dx,k);
        x=0;
        for(int i=0;i<n;++i){
            x = (x+dx.d[i][n-1])%MOD;
        }
        cout<<x<<endl;


    }
}