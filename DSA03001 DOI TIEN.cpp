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

int b[10] = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};



    // min f(x) số tờ tiền ít nhất
    // xây dựng phương án tối ưu cục bộ hướng tới f(x) min
    

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        x=0;
        for(int i=9;i>=0;--i){
            x +=n/b[i];
            n%=b[i];
            if(!n) break;
        }
        cout<<x<<endl;
    }
    
}