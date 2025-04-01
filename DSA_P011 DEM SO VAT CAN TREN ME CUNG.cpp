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

int n,m;
char a[100][100];

void Try(int i, int j){
    a[i][j]='.';
    if(i>0&&a[i-1][j]=='#') Try(i-1,j);
    if(i<n-1&&a[i+1][j]=='#') Try(i+1,j);
    if(j>0&&a[i][j-1]=='#') Try(i,j-1);
    if(j<m-1&&a[i][j+1]=='#') Try(i,j+1);
}

int main(){
    faster;


    
    cin>>n>>m;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin>>a[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if(a[i][j]=='#'){
                Try(i,j);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}
