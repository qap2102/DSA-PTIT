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
const int N=1e6+5;

char c;
int k;
string s, s1;

void Try(int i){
    for(int j=i;j<s.size();++j){
        s1 += s[j];
        if(s1.size()==k) cout<<s1<<endl;
        else Try(j);
        s1.pop_back();
    }
}

int main(){
	faster;
	cin>>c>>k;
    s="";
    for(int i='A';i<=c;++i){
        s+=char(i);
    }
    Try(0);


	
}



