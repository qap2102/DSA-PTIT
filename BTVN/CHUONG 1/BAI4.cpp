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
	for(int i=1;i<=t;++i){
		cout<<"Test "<<i<<" "<<": ";
		ll n;
		cin>>n;
		map<ll, ll> mp;
		for(int i=2;i<=sqrt(n);++i){
			while(n%i==0){
				mp[i]++;
				n/=i;
			}
			
		}
		for(auto x:mp){
			cout<<x.first<<"("<<x.second<<")"<<" ";
		}
		cout<<endl;
	}
}
// Độ phức tạp O(t*(sqrt(n)))