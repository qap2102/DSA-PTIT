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

int n;
int a[30];
vector<int> v;
vector<string> vs;

bool check(vector<int> v){
    for(int i=0;i<v.size()-1;++i){
        if(v[i]>=v[i+1]) return false;
    }
    return true;
}

void in(){
    string tmp="";
    for(int i=0;i<v.size();++i){
        tmp+=(to_string(v[i])+" ");
        
    }
    tmp.pop_back();
    vs.push_back(tmp);
}


void Try(int k, int start, int dem){
    for(int j = start;j<n;++j){
        v.push_back(a[j]);
        if(k==dem&&check(v)){
            in();
            
        }
        else Try(k+1,j+1,dem);
        v.pop_back();

    }
}

int main(){
    faster;
    cin>>n;
    for(int i=0;i<n;++i) cin>>a[i];

    for(int i=2;i<n;++i) Try(1,0,i);
    sort(vs.begin(), vs.end());
    for(string it:vs){
        cout<<it<<endl;
    }

}