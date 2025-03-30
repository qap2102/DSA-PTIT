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
const int N=1e5+5;

vector<string> v;

int n;
int a[11];

void in(int n){
	string s="[";
	for(int i=1;i<n;++i){
		s+=to_string(a[i])+" ";
	}
	s+=to_string(a[n])+"]";
	v.push_back(s);
}

void Try(int buoc){
	
	in(buoc);
	for(int i=1;i<buoc;++i){
		a[i]=a[i]+a[i+1];
	}
	if(buoc-1) Try(buoc-1);
	
	
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	int n;
    	cin>>n;
    	for(int i=1;i<=n;++i){
    		cin>>a[i];
		}
		Try(n);
		for(int i=v.size()-1;i>=0;--i){
			cout<<v[i]<<" ";
		}
		cout<<endl;
		
		v.clear();
	}
    
}
