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

int n;
int a[N], b[N], c[N];


int main(){
	faster;
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;++i) cin>>a[i];
		a[0]=b[0]=0;
		for(int i=1;i<=n;++i){
			if(a[i]>a[i-1]) b[i]=b[i-1]+1;
			else b[i]=1;
		}
		a[n+1]=c[n+1]=0;
		for(int i=n;i>=1;--i){
			if(a[i]>a[i+1]) c[i]=c[i+1]+1;
			else c[i]=1;
		}
		int tmp=0;
		for(int i=1;i<=n;++i) tmp=max(tmp,b[i]+c[i]-1);
		cout<<tmp<<endl;
		
		
		
	}

	
}



