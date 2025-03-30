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
int a[11][11];
int n;
string s;
int kt=0;

void in(){
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void Try(int i, int j, string s){
	if(a[i][j]==0) return ;
	if(i==n&&j==n){
		cout<<s<<" ";
		kt=1;
		return;
	}
	if(i!=n) Try(i+1,j,s+'D');
	if(j!=n) Try(i,j+1,s+'R');
	
	
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	
    	cin>>n;
    	for(int i=1;i<=n;++i){
    		for(int j=1;j<=n;++j){
    			cin>>a[i][j];
			}
		}
    	kt=0;
    	Try(1,1,"");
    	if(!kt) cout<<"-1";
    	cout<<endl;
	}
    
}
