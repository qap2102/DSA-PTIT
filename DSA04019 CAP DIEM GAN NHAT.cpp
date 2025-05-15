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
const int N=1e5+5;

ll t,n,x,k;
int n1,x1,k1;
ll a[N], b[N], c[N*2];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;


double kc;
pair<double,double> pb[N];

bool cmp(pair<double,double> a, pair<double,double> b){
    if(a.fi<b.fi) return true;
    else if(a.fi==b.fi&&a.se<b.se) return true;
    return false;
}

bool cmp1(pair<double,double> a, pair<double,double> b){
    if(a.se<b.se) return true;
    else if(a.se==b.se&&a.fi<b.fi) return true;
    return false;
}

double dis(pair<double,double> a, pair<double,double> b){
    return sqrt(pow(a.fi-b.fi,2)+pow(a.se-b.se,2));
}

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(int i=0;i<n;++i) cin>>pb[i].fi>>pb[i].se;
        sort(pb,pb+n,cmp);
        // for(int i=0;i<n;++i){
        //     cout<<pb[i].fi<<" "<<pb[i].se<<endl;
        // }
        kc = LLONG_MAX;
        for(int i=0;i<n-1;++i) kc = min(kc,dis(pb[i],pb[i+1]));
        sort(pb,pb+n,cmp1);
        for(int i=0;i<n-1;++i) kc = min(kc,dis(pb[i],pb[i+1]));

        cout<<setprecision(6)<<fixed<<kc<<endl;

    }
}