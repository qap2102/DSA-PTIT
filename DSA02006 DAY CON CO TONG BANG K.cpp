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

vector<int> v;
vector<vector<int>> vv;
int a[1005];
int n,k;
bool kt = false;

void Try(int i, int sum){
    for(int j=i;j<n;++j){
        v.push_back(a[j]);
        if(sum+a[j]<=k) Try(j+1,sum+a[j]);
        v.pop_back();
    }
    if(sum==k) {
        kt=true;
        vv.push_back(v);
    }
    
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>k;
        v.clear();
        vv.clear();
        for(int i=0;i<n;++i){
            cin>>a[i];
        }
        sort(a,a+n);
        kt = false;
        Try(0,0);
        if(!kt) cout<<-1<<endl;
        else {

        
        for(auto it:vv){
            cout<<"[";
            for(int x:it){
                if(x!=it[it.size()-1]){
                    cout<<x<<" ";
                }
                else cout <<x;
            }
            cout<<"] ";
        }
        cout<<endl;
        


    }
}
}