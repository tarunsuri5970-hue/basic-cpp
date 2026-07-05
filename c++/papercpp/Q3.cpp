#include<iostream>
using namespace std;
int main(){
 int arr[8] ;
 arr[0]=10;
 arr[1]=15; 
for (int i=2 ; i<8 ; i++){
    arr[i]=arr[i-1]+arr[i-2];
}
 cout<<"array element is : ";
    for (int i=0 ; i<8 ; i++){
        cout<<arr[i]<<" ";
    }}