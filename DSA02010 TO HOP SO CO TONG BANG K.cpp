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


int a[25];
int n,x;
vector<int> v;
vector<vector<int>> vv;

bool kt = false;

void Try1(int i, int sum){
    for(int j=i;j<n;++j){
        v.push_back(a[j]);
        if(sum+a[j]<=x) Try1(j, sum+a[j]);
        v.pop_back();
    }
    if(sum==x) {
        kt=true;
        vv.push_back(v);
    }
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        v.clear();
        vv.clear();
        cin>>n>>x;
        for(int i=0;i<n;++i) cin>>a[i];
        sort(a,a+n);
        kt = false;
        Try1(0,0);
        if(!kt) cout<<-1<<endl;
        else {
            for(auto it:vv){
                cout<<"["<<it[0];
                for(int i=1;i<=it.size()-1;++i){
                    cout<<" "<<it[i];
                }
                cout<<"]";
            }
            cout<<endl;
        }



    }
}



