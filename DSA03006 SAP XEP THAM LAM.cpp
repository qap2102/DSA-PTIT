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
int a[55];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        int b[n+1]={};
        for(int i=0;i<n;++i){
            cin>>a[i];
            b[i]=a[i];
        }
        sort(a,a+n);
        kt = false;
        for(int i=0;i<n/2;++i){
            if(a[i]!=b[i]&&a[i]!=b[n-i-1]){
                kt = true;
                break;
            }
        }
        if(!kt) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
}