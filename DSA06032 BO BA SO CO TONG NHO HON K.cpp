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
		cin>>n>>x;
		ll a[n];
		for(int i=0;i<n;++i) cin>>a[i];
		sort(a,a+n);
		ll sum=0, cnt=0;
		for(int i=0;i<n;++i){
			int j=i+1, k=n-1;
			while(j<k){
				sum = a[i]+a[j]+a[k];
				if(sum>=x) --k;
				else {
					cnt+=(k-j);
					++j;
				}
			}
		}
		cout<<cnt<<endl;
	}
	
	
}


