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
//void in(){
//	for(int i=0;i<s.size();++i){
//		cout<<s[a[i]];
//	}
//	cout<<" ";
//	
//}

void Try(int i, int cnt){
	for(int j = 1; j <= 8; j++){
        if(!cot[j] && !xuoi[i-j+8] && !nguoc[i+j-1]){
            cot[j] = 1; xuoi[i-j+8] = 1; nguoc[i+j-1] = 1;
            cnt += a[i][j];
            if(i == 8){
                tmp = max(tmp, cnt);
            }
            else Try(i+1,cnt);
            cnt -= a[i][j];
            cot[j] = 0; xuoi[i-j+8] = 0; nguoc[i+j-1] = 0;
        }
    }
}

int gcd(int a, int b){
	if(b==0) return a;
	return gcd(b, a%b);
}

int lcm(int a, int b){
	return a / gcd(a, b) * b; 
}

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
    	
    	cin>>n>>m;
    	int x = lcm(n - 1, m - 1);
		int dua = x / (n - 1);
		int dub = x / (m - 1);
		int res = 1 + x - (dua - 1) * (dub - 1) / 2 ;
		cout << res << endl; 

	}
    
}

