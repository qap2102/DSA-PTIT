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

int cnt;

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
    int t;
    cin>>t;
    while(t--){
    	cin>>n;
    	Try(1,0);
	}
    
}
