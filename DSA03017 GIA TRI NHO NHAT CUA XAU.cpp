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
ll a[N], b[N];
vector<int> v;
vector<vector<int>> vv;
bool kt = false;

int main(){
    faster;
    cin>>t;
    cin.ignore();
    while(t--){
        cin>>n;
        string s;
        cin>>s;
        map<char, int> mp;
        priority_queue<int> pq;
        for(int i=0;i<s.size();++i){
            mp[s[i]]++;
        }

        for(int i=0;i<s.size();++i){
            pq.push(mp[s[i]]);
            mp[s[i]] = 0;
        }
        ll sum=0;
        while(n--){
            int top1 = pq.top();
            pq.pop();
            pq.push(top1-1);
        }
        while(!pq.empty()){
            sum+=pq.top()*pq.top();
            pq.pop();
        }
        cout<<sum<<endl;

    }
}