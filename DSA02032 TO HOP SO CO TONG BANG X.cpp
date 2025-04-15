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
int a[25];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

void Try(int i, int sum){
    for(int j=i;j<n;++j){
        v.push_back(a[j]);
        if(sum+a[j]<=x){
            Try(j,sum+a[j]);

        }
        v.pop_back();
    }
    if(sum==x) {
        kt = true;
        vv.push_back(v);
    }
}


int main(){
    faster;
    cin>>t;
    while(t--){

        kt = false;
        vv.clear();
        v.clear();
        cin>>n>>x;
        for(int i=0;i<n;++i) cin>>a[i];

        sort(a,a+n);
        Try(0,0);
        if(!kt) cout<<-1<<endl;
        else {
            cout<<vv.size()<<" ";
            for(auto it:vv){
                
                cout<<"{"<<it[0];
                for(int i=1;i<it.size();++i){
                    cout<<" "<<it[i];
                }
                cout<<"} ";
            }
            cout<<endl;
        }

    }
}