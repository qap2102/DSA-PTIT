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

int main(){
    faster;
    string s;
    getline(cin,s);
    while(s.size()%3!=0) s='0'+s;
    for(int i=0;i<s.size()-2;i+=3){
        string a="";
        a=a+s[i]+s[i+1]+s[i+2];
        if(a == "000") cout << "0";
        else if(a == "001") cout << "1";
        else if(a == "010") cout << "2";
        else if(a == "011") cout << "3";
        else if(a == "100") cout << "4";
        else if(a == "101") cout << "5";
        else if(a == "110") cout << "6";
        else if(a == "111") cout << "7";

    }
}