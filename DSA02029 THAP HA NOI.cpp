#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

vector<string> v;
int a[100][100];
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

void Try(int n, char A, char B, char C){
	
	if(n==1){
		
		in(A,C);
		return;
	}
	
	
	
	Try(n-1,A,C,B);
	
	in(A,C);
	Try(n-1,B,A,C);
	
	
	
}


int main(){
    faster;
    
    	
    	cin>>n;
    	Try(n,'A','B','C');
		
	
    
}

