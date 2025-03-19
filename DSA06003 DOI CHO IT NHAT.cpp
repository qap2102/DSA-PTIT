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

int n,x;


int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		ll cnt=0;
		for(int i=0;i<n;++i){
			auto *it=min_element(a+i,a+n);
			if(it!=a+i){
				++cnt;
				swap(a[i],a[it-a]);
			}
			
		}
		cout<<cnt<<endl;
	}
	
	
}


