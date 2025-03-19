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
int n,k;
int a[5005];

bool check(){
	for(int i=0;i<n-1;++i){
		for(int j=i+1;j<n-2;++j){
			if(binary_search(a+j+1,a+n,k-a[i]-a[j])) return true;
		}
	}
	return false;
}

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		for(int i=0;i<n;++i) cin>>a[i];
		sort(a,a+n);
		if(check()) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
	}

	
}



