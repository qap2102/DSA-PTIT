#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

bool kt1(string s){
	int n=s.size()-1;
	for(int i=0;i<n;++i){
		if(s[i]>s[i+1]) return 0;
	}
	return 1;
}
bool kt2(string s){
	int n=s.size()-1;
	for(int i=0;i<n;++i){
		if(s[i]<s[i+1]) return 0;
	}
	return 1;
}
int main(){
	faster;
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		if(kt1(s)||kt2(s)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
		
		
		
	}
}
// Độ phức tạp O(t*n)