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
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s,s1;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n>>x;
        // n là tử số
        // x là mẫu số
        while(x%n){
            k = x/n + 1;
            n = n*k - x;
            x = x*k;
            cout<<"1/"<<k<<" + ";
        }
        cout<<"1/"<<x/n<<endl;
    }
}