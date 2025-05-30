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
const int N=505;

int n,x,k;

queue<int> q;

int main(){
    faster;
    cin>>n;
    while(n--){
        cin>>x;
        if(x==3){
            cin>>k;
            q.push(k);
        }
        else if(x==5){
            if(q.empty()) cout<<-1<<endl;
            else cout<<q.front()<<endl;
        }
        else if(x==6){
            if(q.empty()) cout<<-1<<endl;
            else cout<<q.back()<<endl;
        }
        else if(x==4){
            if(!q.empty()) q.pop();
        }
        else if(x==2){
            if(q.empty()) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else if(x==1) cout<<q.size()<<endl;
    }
}