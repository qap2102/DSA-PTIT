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


// chuyển ma trận kề sanh danh sách kề
int n, m;
vector<int> adj[1001];
int a[1001][1001];
vector<pair<int,int>> vp;
// adj lưu danh sách kề của đỉnh i
int main(){
	faster;
	cin>>n;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin>>a[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			if(a[i][j]==1){
				adj[i].push_back(j);
				// adj[j].push_back(i);
				
			}
		}
	}
	for(int i=1;i<=n;++i){
		
		for(int k:adj[i]){
			cout<<k<<" ";
		}
		cout<<endl;
	}

	
}



