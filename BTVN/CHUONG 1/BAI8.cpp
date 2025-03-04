#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long

void chuanhoa(string &s){
    s[0] = toupper(s[0]);
    for(int i=1;  i<s.size(); i++){
        s[i] = tolower(s[i]);
    }
}
void inhoa(string &s){
    for(int i=0 ; i< s.size(); i++){
        s[i] = toupper(s[i]);
    }
}

int main(){
    int t; 
	cin >> t;
    cin.ignore();
    while(t--){ 
        string s;
        getline(cin,s); 
        stringstream ss(s); 
        string tmp ="";
        vector<string>v;
        while(ss >> tmp){ 
            v.push_back(tmp); 
        }
        inhoa(v[0]); 
        for(int i=1 ; i < v.size() ; i++){ 
            chuanhoa(v[i]); 
            if( i == v.size()-1) cout << v[i] << ", ";
            else cout << v[i] << " ";
        }
        cout << v[0];
        cout << endl;
    }
}
// Độ phức tạp O(t*n^2)