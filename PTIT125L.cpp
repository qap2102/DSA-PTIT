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

vector<int> v;
int a[35];
int n,m;
string s;
bool kt[15]={0};
char b[35][35];


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
bool checkCot(int i, int j){
	
	if(b[i][j]==b[i+1][j]&&b[i+1][j]==b[i+2][j]) return true;
	return false;
}
bool checkHang(int i, int j){
	
	if(b[i][j]==b[i][j+1]&&b[i][j+1]==b[i][j+2]) return true;
	return false;
}

bool checkCheoChinh(int i, int j){
	
	if(b[i][j]==b[i+1][j+1]&&b[i+1][j+1]==b[i+2][j+2]) return true;
	return false;
}

bool checkCheoPhu(int i, int j){
	
	if(b[i][j]==b[i+1][j-1]&&b[i+1][j-1]==b[i+2][j-2]) return true;
	return false;
}

bool kiemtra(int i, int j){
	
	if(checkCot(i,j)||checkHang(i,j)||checkCheoChinh(i,j)||checkCheoPhu(i,j)) return true;
	return false;
}


int main(){
	faster;
	cin>>n;
	b[n+4][m+4]={'.'};
	for(int i=2;i<n+2;++i){
		for(int j=2;j<n+2;++j){
			cin>>b[i][j];
		}
	}
	int tmp=0;
	for(int i=2;i<n+2;++i){
		for(int j=2;j<n+2;++j){
			if(b[i][j]!='.'){
				if(kiemtra(i,j)){
					cout<<b[i][j];
					//break;
					tmp=1;
					return 0;
				}
			}
		}
	}
	if(!tmp) cout<<"ongoing";
	
//	4
//....
//..A.
//AAB.
//.B.B
	
	
	
	
	
	
	
}

//XOO
//XOO
//X..  ....
	// .xoo.
	// .X...
	// .XOX.
	// .....	

// de tinh l + (l+1) + (l+2) +...+(r-1) + r = n
// => (r+l)(r-l+1)=2*n
// dat r-l+1=i => i<r+l => i<sqrt(2*n) r+l>sqrt(2*n)
// 2*r+1 = 2*n/i +i => 2*n chia het cho i va 2*n/i +i le
