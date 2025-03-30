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


// chuyển danh sách kề sang danh sách cạnh
int n, m;
vector<int> adj[1001];
int a[1001][1001];
vector<pair<int,int>> vp;
// adj lưu danh sách kề của đỉnh i
int main(){
	faster;
	cin>>n;
	cin.ignore();
	
	for(int i=1;i<=n;++i){
		string s,num;
		getline(cin,s);
		stringstream ss(s);
		while(ss>>num){
			if(stoi(num)>i){
				vp.push_back({i,stoi(num)});
			}
		}
	}
	for(auto it:vp){
		cout<<it.fi<<" "<<it.se<<endl;
	}
	

	
}



