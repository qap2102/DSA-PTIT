#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

int n,m;
int x[100005], y[100005];

/*
logarit 2 vế ta được: logx/x<logy/y. Có hai trường hợp thỏa mãn
=> khi x<e=2.71828 , nếu x<y thì logx/x<logy/y
=> khi x>e=2.71828 , nếu x>y thì logx/x<logy/y
=> xét các trường hợp x<=3 riêng. Nếu x>3 loại trừ khoản [2,x]
*/

int dem(int start, int end){
    int *it1 = lower_bound(y, y+m, start);
    int *it2 = upper_bound(y, y+m, end);
    return it2-it1;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0;i<n;++i){
            cin>>x[i];
        }
        for(int i=0;i<m;++i){
            cin>>y[i];
        }

        int cnt=0; // đếm số cặp thỏa mãn
        sort(y, y+m);
        for(int i=0;i<n;++i){
            if(x[i]==0) continue;
            else if(x[i]==1) {
                cnt+= dem(0,0);
            }
            else if(x[i]==2){
                cnt+=m-dem(2,4);

            }
            else if(x[i]==3){
                cnt+=m-dem(3,3);
            }
            else{
                cnt+=m-dem(2,x[i]);
            }
        }
        cout<<cnt<<endl;
    }
}