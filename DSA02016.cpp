#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;
int a[100];
int n,m;
string s;
bool kt[15]={0};

int cnt;

int cot[100], xuoi[100], nguoc[100];
//void in(){
//	for(int i=0;i<s.size();++i){
//		cout<<s[a[i]];
//	}
//	cout<<" ";
//	
//}

void Try(int i){
	for(int j=1;j<=n;++j){
		if(!cot[j]&&!xuoi[i-j+n]==1&&!nguoc[i+j-1]==1){
			a[i]=j;
			cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=1;
			if(i==n){
				++cnt;
				
			}
			else Try(i+1);
			
			cot[j]=xuoi[i-j+n]=nguoc[i+j-1]=0;
		}
	}
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	
    	cin>>n;
    	for(int i=1;i<=100;++i){
    		cot[i]=xuoi[i]=nguoc[i]=0;
		}
		cnt=0;
		Try(1);
		cout<<cnt<<endl;
	}
    
}
