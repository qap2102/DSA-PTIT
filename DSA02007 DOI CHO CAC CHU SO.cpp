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

int n,k,tmp;
int a[105];
vector<int> v;
bool kt = false;
string s;



int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>k;
        cin.ignore();
        getline(cin,s);
        
        for(int i=0;i<s.size()&&k;++i){
            tmp=i;
            for(int j=i+1;j<=s.size()-1;++j){
                if(s[tmp]<=s[j]) tmp=j;
            }
            if(i<tmp&&s[i]<s[tmp]){
                swap(s[i],s[tmp]);
                k--;
            }
        }
        cout<<s<<endl;


    }
}