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
const int N=1e5+5;

vector<string> v;

void in(){
	for(int i=0;i<v.size();++i){
		cout<<v[i]<<" ";
	}
	cout<<endl;
}

void Try(int j, vector<string> &a, vector<string> &v, int n, int k){
	
	for(int i=j;i<n;++i){
		v.push_back(a[i]); 
		if(v.size()==k){
			in();
			
		}
		else{
			Try(i+1,a,v,n,k);
		}
		v.pop_back();
	}
}


int main(){
    faster;
    int n,k;
    cin>>n>>k;
    map<string, int> mp; // lưu các tên và số lần xuất hiện
    for(int i=0;i<n;++i){
    	string s;
    	cin>>s;
    	mp[s]++;
	}
	vector<string> a;
	for(auto x:mp){
		a.push_back(x.first);
	} // vector a lưu các phần tử sau khi đã loại các phần tử trùng nhau và sắp xếp theo thứ tự từ điẻn
	int m=a.size();
	Try(0,a,v,m,k);
    
}
