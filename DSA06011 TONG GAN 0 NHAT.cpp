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
		int maxx = INT_MAX;
		int tmp=0;
		for(int i=0;i<n-1;++i){
			for(int j=i+1;j<n;++j){
				if(maxx>abs(a[i]+a[j])){
					maxx = abs(a[i]+a[j]);
					tmp= a[i]+a[j];
				}
			}
		}
		cout<<tmp<<endl;
	}
	
	
}


