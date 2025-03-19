#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
const int MOD = 1e9;

vector<int> v;
int a[31];
int n,m;
string s;
bool kt[15]={0};


ll cnt;
int maxx = INT_MAX;





int cot[100], xuoi[100], nguoc[100];
void in(){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<endl;
	
}

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
	pair<int,int> p[n+1];
	for(int i=1;i<=n;++i){
		p[i].first=0;
		p[i].second=0;
	}
	ll sum=0;
	for(int i=1;i<=m;++i){
		int x,y;
		cin>>x>>y;
		p[x].first++;
		p[y].second++;
		
	}
	for(int i=1;i<=n;++i){
		sum+=p[i].first;
		v.push_back(sum);
		sum-=p[i].second;
	}
	sort(v.begin(),v.end());
	cout<<v[v.size()/2]<<endl;
	
	
}
	
		

// de tinh l + (l+1) + (l+2) +...+(r-1) + r = n
// => (r+l)(r-l+1)=2*n
// dat r-l+1=i => i<r+l => i<sqrt(2*n) r+l>sqrt(2*n)
// 2*r+1 = 2*n/i +i => 2*n chia het cho i va 2*n/i +i le
