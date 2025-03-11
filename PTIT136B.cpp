#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;
int a[10];
int n,m;
string s;
bool kt[15]={0};

ll cnt;

int cot[100], xuoi[100], nguoc[100];
void in(){
	for(int i=1;i<=n;++i){
		cout<<a[i];
	}
	cout<<endl;
	
}

void Try(int i, int ans){
	
	for(int j=1;j<=n;++j){
		if(ans>0&&abs(ans-j)==1||kt[j]) continue;
		a[i]=j;
		kt[j]=1;
		
		if(i==n) in();
		else Try(i+1,j);
		kt[j]=0;
	}
	
}


int main(){
	faster;
	cin>>n>>m;
	// char v[2*n+1][2*m+1];
	vector<vector<char>> v(2*n+1, vector<char>(2*m+1));
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cin>>v[i][j];
		}
	}
	int a,b;
	cin>>a>>b;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			v[i][2*m+1-j] = v[i][j];
		}
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=2*m;++j){
			v[2*n+1-i][j] = v[i][j];
		}
	}
	if (v[a][b] == '#')
        v[a][b] = '.';
    else if (v[a][b] == '.')
        v[a][b] = '#';

    for (int i=1;i<=2*n;++i){
        for (int j=1;j<=2*m;++j){
            cout << v[i][j];
		}
        cout << endl;
    }
	
	
	
}
// de tinh l + (l+1) + (l+2) +...+(r-1) + r = n
// => (r+l)(r-l+1)=2*n
// dat r-l+1=i => i<r+l => i<sqrt(2*n) r+l>sqrt(2*n)
// 2*r+1 = 2*n/i +i => 2*n chia het cho i va 2*n/i +i le
