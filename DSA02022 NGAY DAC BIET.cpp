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

int n;
int a[11];

void in(int n){
	string s="[";
	for(int i=1;i<n;++i){
		s+=to_string(a[i])+" ";
	}
	s+=to_string(a[n])+"]";
	v.push_back(s);
}

void Try(int buoc){
	
	in(buoc);
	for(int i=1;i<buoc;++i){
		a[i]=a[i]+a[i+1];
	}
	if(buoc-1) Try(buoc-1);
	
	
}


int main(){
    faster;
    vector<string> ngay = {"02", "20", "22"};
    vector<string> thang = {"02"};
    vector<string> nam = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};
    for(int i=0;i<ngay.size();++i){
    	for(int j=0;j<thang.size();++j){
    		for(int k=0;k<nam.size();++k){
    			cout<<ngay[i]<<"/"<<thang[j]<<"/"<<nam[k]<<endl;
			}
		}
	}
    
}
