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

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		ll n;
        cin>>n;
        ll a[n];
        for(int i=0;i<n;++i) cin>>a[i];
        ll tmp = *min_element(a,a+n);
        ll check=0;
        for(int i=0;i<n;++i){
            if(a[i]==tmp){
                check=i;
                break;
            }
        }
        cout<<check<<endl;
		
		
	}

	
}



