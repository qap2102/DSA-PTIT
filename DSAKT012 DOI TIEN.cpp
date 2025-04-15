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
int a[35];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
int maxx ;

void Try(int i, int sum, int cnt){
    if(i>n||sum>x||cnt>=maxx){
        return;
    }
    if(sum==x){
        maxx = min(cnt,maxx);
    }
    Try(i+1,sum,cnt);
    Try(i+1,sum+a[i],cnt+1);
}

int main(){
    faster;
    maxx = 35;
    cin>>n>>x;
    for(int i=0;i<n;++i) cin>>a[i];
    sort(a,a+n);
    Try(0,0,0);

    if(maxx == 35) cout<<-1<<endl;
    else cout<<maxx<<endl;

}