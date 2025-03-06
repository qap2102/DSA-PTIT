#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;
int a[11];
int n;
string s;
bool kt[15]={0};

void in(){
	for(int i=0;i<s.size();++i){
		cout<<s[a[i]];
	}
	cout<<" ";
	
}

void Try(int i){
	for(int j=0;j<s.size();++j){
		if(!kt[j]){
			a[i]=j;
			kt[j]=1;
			if(i==s.size()-1) in();
			else Try(i+1);
			kt[j]=0;
		}
	}
	
	
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	cin>>s;
    	Try(0);
    	cout<<endl;
    	
	}
    
}
