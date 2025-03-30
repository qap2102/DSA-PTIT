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
int a[101][101];
int n,m;
string s;
bool kt[15]={0};

int cnt;
//void in(){
//	for(int i=0;i<s.size();++i){
//		cout<<s[a[i]];
//	}
//	cout<<" ";
//	
//}

void Try(int i, int j){
	
	if(i==n&&j==m){
		cnt++;
		return;
	}
	if(i!=n) Try(i+1,j);
	if(j!=m) Try(i,j+1);
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	
    	cin>>n>>m;
    	for(int i=0;i<n;++i){
    		for(int j=0;j<m;++j){
    			cin>>a[i][j];
			}
		}
		cnt=0;
		Try(1,1);
		cout<<cnt<<endl;
	}
    
}
