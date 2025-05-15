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
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;
string s;

string check(int n){
    int a = -1, b = -1;
    for(int i=0;i<=n/7;++i){
        int tmp = n - i*7;
        if(tmp%4 == 0){
            int k = tmp/4;
            if(a==-1||k+i<a+b||k+i==a+b&&k>a){
                a = k;
                b = i;
            }
        }
    }
    if(a == -1) return "-1";
    else return string (a, '4') + string(b, '7');
}

int main(){
	faster;
	cin>>t;
    cin.ignore();
	while(t--){
		cin>>n;
        
        cout<<check(n)<<endl;
		
	}

	
}



