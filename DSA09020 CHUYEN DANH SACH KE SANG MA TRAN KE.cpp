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


// chuyển danh sách kề sang ma trận kề
int n, m;
vector<int> adj[1001];
int a[1001][1001];
vector<pair<int,int>> vp;
// adj lưu danh sách kề của đỉnh i
int main(){
	faster;
	int E;
    cin>>E;
    cin.ignore();
    
    for(int i=1;i<=E;++i){
        string s;
        getline(cin,s);
        stringstream ss(s);
        string num = "";
        while(ss >> num)
        {
            a[i][stoi(num)] = 1;
        }
    }
    for(int i=1;i<=E;++i){
        for(int j=1;j<=E;++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
	

	
}



