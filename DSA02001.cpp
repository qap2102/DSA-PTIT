#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;

int n;
int a[11];

void in(int n){
	cout<<"[";
	for(int i=1;i<n;++i){
		cout<<a[i]<<" ";
	}
	cout<<a[n]<<"]"<<endl;
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
	}
    
}
