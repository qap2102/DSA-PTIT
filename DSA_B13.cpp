#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fi first
#define se second


int main(){
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		cin.ignore();
		string s;
		getline(cin,s);
		set<char> sets;
		for(int i=0;i<s.size();++i){
			if(s[i]==' '){
				continue;
			}
			else {
				sets.insert(s[i]);
			}
		}
		int kt=0;
		vector<ll> v;
		for(auto x:sets){
			int tmp=x-'0';
			if(tmp&1){
				v.push_back(tmp);
				kt=1;
			}
		}
		if(!kt) cout<<-1<<endl;
		else {
			for(int j=v.size()-1;j>=0;--j) cout<<v[j]<<" ";
			cout<<endl;
		}
	}
}
