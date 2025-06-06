#include <bits/stdc++.h>
using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define ll long long
#define fi first
#define se second

int main(){
    faster;
    
    int n;
    cin >> n; // Phải nhập n trước
    
    vector<string> vs(n + 1); // vs[1..n]

    for(int i = 1; i <= n; ++i){
        cin >> vs[i];
    }

    string s;
    cin >> s; // Nhập chuỗi điều kiện

    int a[n + 1];
    for(int i = 1; i <= n; ++i) a[i] = i;

    set<string> se;

    do{
        if(vs[a[n]] == s){ // Nếu phần tử cuối bằng s
            string str = "";
            for(int i = 1; i <= n; ++i){
                str += vs[a[i]] + " ";
            }
            se.insert(str);
        }
    } while(next_permutation(a + 1, a + n + 1));

    for(auto &it : se){
        cout << it << '\n';
    }

    return 0;
}
