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

ll luythua(ll a, ll b){
	if(!b) return 1;
	ll c = luythua(a,b/2);
	c = (c*c)%MOD;
	if(b&1) c = (c*a)%MOD;
	return c;
}
int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		cout<<luythua(n,k)<<endl;
		
		
	}

	
}



