#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;
int a[15][15];
int n,m;
string s;
bool kt[15]={0};

int cnt;
int tmp=0;

int cot[100], xuoi[100], nguoc[100];


void in(char A, char B){
//	for(int i=0;i<s.size();++i){
//		cout<<s[a[i]];
//	}
//	cout<<" ";
	cout<<A<<" -> "<<B<<endl;
	
}

int maxx = INT_MAX;
void Try(int sum, int buoc, int cnt){
	
	if(cnt<n-1&&sum<maxx){
		for(int i=1;i<n;++i){
			if(!kt[i]){
				kt[i]=1;
				Try(sum+a[buoc][i],i,cnt+1);
				kt[i]=0;
			}
		}
	}
	else maxx=min(maxx,sum+a[buoc][0]);
}


int main(){
    faster;
    
    	
    	cin>>n;
    	for(int i=0;i<n;++i){
    		for(int j=0;j<n;++j){
    			cin>>a[i][j];
			}
		}
    	Try(0,0,0);
    	cout<<maxx<<endl;
		
	
    
}

