#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,t,x,y;
    getline(cin,s);
    getline(cin,t);
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    if(s==t) cout<<"yes";
    else cout<<"no";

    

}