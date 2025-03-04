#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i){
			cin>>a[i];
		}
		int l=0, r=n-1;
		int kt=1;
		while(l<=r){
			if(a[l]!=a[r]){
				kt=0;
			}
			l++;
			r--;
		}
		if(kt==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
		
		
		
	}
}
// Độ phức tạp O(t*log(n))
