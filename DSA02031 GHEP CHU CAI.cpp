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
bool kt;

bool nguyenam(char c){
    return c == 'A'|| c == 'E';
}


int main(){
	faster;
	cin>>c;
    s="";
    for(int i='A';i<=c;++i){
        s+=char(i);
    }
    do {
        kt = false;
        for(int i=1;i<s.size()-1;++i){
            if(nguyenam(s[i])&&!nguyenam(s[i-1])&&!nguyenam(s[i+1])){
                kt = true;
                break;
            }
        }
        if(!kt) cout<<s<<endl;

    }while(next_permutation(s.begin(),s.end()));
    
    


	
}
