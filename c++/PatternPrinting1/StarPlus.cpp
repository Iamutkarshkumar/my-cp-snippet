//   *
//   *
// *****
//   *
//   *
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of rows ";
    cin>>n;
    int mid= n/2 + 1;
    for(int i=1; i<=n;i++){
        cout<<endl;
        for(int j=1; j<=n;j++){
            if(i==mid || j==mid) cout<<"*";
            else cout<<" ";
        
    }}
}