#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
int n,k;
int a[1005];
vector<int> v;
vector<vector<int>> se;
int cnt=0;
void Try(int i, int sum){
    if(sum==k){
        se.push_back(v);
        ++cnt;
    }
    for(int j=i;j<n;++j){
        v.push_back(a[j]);
        if(sum+a[j]<=k) Try(j+1,sum+a[j]);
        v.pop_back();
    }
    
}
int main(){
    cin>>n>>k;
    for(int i=0;i<n;++i){
        cin>>a[i];

    }
    sort(a,a+n);
    Try(0,0);
    sort(se.begin(), se.end(), greater<vector<int>>());
    for(vector<int> v: se){
        for(int x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    cout<<cnt<<endl;
}