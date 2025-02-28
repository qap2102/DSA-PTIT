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
		string s;
		cin>>s;
		int n=s.size();
		if(s[0]!=s[n-1]) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}
