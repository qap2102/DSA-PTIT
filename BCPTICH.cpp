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
	int t;
	cin>>t;
	for(int i=1;i<=t;++i){
		int stt;
		cin>>stt;
		int n;
		cin>>n;
		cnt=0;
		for(ll i=2;i<=sqrt(2*n);i++){
			if((2*n)%i==0&&((2*n)/i+i)%2!=0){
				cnt+=1;
			}
		}
		cout<<i<<" "<<cnt<<endl;
	}
	
}
// de tinh l + (l+1) + (l+2) +...+(r-1) + r = n
// => (r+l)(r-l+1)=2*n
// dat r-l+1=i => i<r+l => i<sqrt(2*n) r+l>sqrt(2*n)
// 2*r+1 = 2*n/i +i => 2*n chia het cho i va 2*n/i +i le
