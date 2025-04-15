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

int t,n,x;
int a[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        for(int i=0;i<n;++i) cin>>a[i];

        priority_queue<int,vector<int>,greater<int>> pq(a,a+n);

        ll sum=0;
        while(pq.size()!=1){
            int top1 = pq.top();
            pq.pop();
            int top2 = pq.top();
            pq.pop();
            sum+=top1+top2;
            pq.push(top1+top2);
        }
        cout<<sum<<endl;
    }
}