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
		map<int,int> mp;
		for(int i=0;i<n;++i){
			cin>>a[i];
			mp[a[i]]++;
		}
		int kt=0;
		int tmp=0;
		for(int i=0;i<n;++i){
			if(mp[a[i]]>1){
				tmp=a[i];
				kt=1;
				break;
			}
		}
		if(!kt) cout<<"NO"<<endl;
		
		else cout<<tmp<<endl;
	}
	
	
}


