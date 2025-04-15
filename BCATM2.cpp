#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int MOD = 1e9;

vector<int> v;
int a[35];
int n,m;
string s;
bool kt[15]={0};


ll cnt;
int maxx = INT_MAX;


void Try(int i, int sum, int cnt){
	if (sum> m||cnt> maxx)
        return;
    if (i == n){
        if (sum==m)
            maxx = min(cnt,maxx);
        return;
    }
    Try(i + 1, sum, cnt);
    Try(i + 1, sum + a[i], cnt + 1);
	
}


int main(){
	faster;
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	Try(0,0,0);
	cout<<maxx;
	return 0;
	
	
	
}

