#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    long long count=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0 ; i<n ; i++){
        if(s[i]==s[i+1]) count++;
    }
    cout<<count;
}

