#include<iostream>
using namespace std;
int main(){
   int arr[]={5,6,1,2,4,3};
   int n=6;
   for(int i: arr){
    cout<<i<<" ";
   }
   cout<<endl;
   for(int i=0;i<n-1;i++){
    int min=INT16_MAX;
    int mindx=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min){
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
   }
   for(int i: arr){
    cout<<i<<" ";
   }

}