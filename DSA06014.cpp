#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<bool> a(1e6+5, true);
void sangnt(){
	a[0]=a[1]=false;
	for(int i=2;i<=1e3;++i){
		if(a[i]){
			for(int j=i*i;j<=1e6;j+=i){
				a[j]=false;
			}
		}
	}
}
int main(){
	faster;
	sangnt();
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int kt=0;
		for(int i=2;i<=n/2;++i){
			if(a[i]&&a[n-i]){
				cout<<i<<" "<<n-i;
				kt=1;
				break;
			}
		}
		if(!kt) cout<<-1;
		cout<<endl;
	}
}
